#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int age;
    int group;
    double average_grade;
};

int main()  {
    setlocale(LC_ALL, "rus");
    Student s1;

    s1.name = "Иванов Иван";
    s1.age = 19;
    s1.group = 4511;
    s1.average_grade = 4.5;

    cout << "Студент: " << s1.name << endl;
    cout << "Возраст: " << s1.age << endl;
    cout << "Группа: " << s1.group << endl;
    cout << "Средняя оценка : " << s1.average_grade << endl;

    Student s2{"Петров Петр", 20, 4508, 4.0};
    cout << "\nСтудент 2: " << s2.name << ", Группа: " <<s2.group << ", Средняя оценка: " << s2.average_grade << endl;

    Student s3{"Васильев Тихон", 19, 4511, 3.8};
    cout << "\nСтудент 3: " << s3.name << ", Группа: " <<s3.group << ", Средняя оценка: " << s3.average_grade << endl;

    double max = s1.average_grade;

    if (s2.average_grade > max) max = s2.average_grade;
    if (s3.average_grade > max) max = s3.average_grade;
    cout << max;

    return 0;
}
