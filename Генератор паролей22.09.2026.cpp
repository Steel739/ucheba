#include <iostream>
#include <string>

int main() {
    std::setlocale(LC_ALL, "Russian");

    std::string firstName;
    std::string lastName;
    size_t maxLength;

    std::cout << "¬ведите им€: ";
    std::cin >> firstName;

    std::cout << "¬ведите фамилию: ";
    std::cin >> lastName;

    std::cout << "¬ведите максимальную длину парол€: ";
    std::cin >> maxLength;

    std::string password = "";

    int i = firstName.length() - 1;
    int j = lastName.length() - 1;

    while (password.length() < maxLength && (i >= 0 || j >= 0)) {

        if (i >= 0 && password.length() < maxLength) {
            password += firstName[i];
            i--;
        }
        if (j >= 0 && password.length() < maxLength) {
            password += lastName[j];
            j--;
        }
    }

    std::cout << "—генерированный пароль: " << password << std::endl;

    return 0;
}
