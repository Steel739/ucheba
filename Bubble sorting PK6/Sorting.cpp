#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>

const int ARRAY_SIZE = 1000;
const int MIN_VAL = 1;
const int MAX_VAL = 1000;


void populate_random_array(std::vector<int>& arr) {
    std::srand(std::time(0));

    for (int i = 0; i < ARRAY_SIZE; ++i) {
        arr[i] = (std::rand() % (MAX_VAL - MIN_VAL + 1)) + MIN_VAL;
    }
}

void bubble_sort(std::vector<int>& arr) {
    int n = arr.size();
    bool swapped;

    for (int i = 0; i < n - 1; ++i) {
        swapped = false;

        for (int j = 0; j < n - 1 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (swapped == false) {
            break;
        }
    }
}

void print_array_sample(const std::vector<int>& arr, int count = 10) {
    std::cout << "\n--- Sample of sorted massive (first " << count << " elements) ---\n";
    for (int i = 0; i < std::min((int)arr.size(), count); ++i) {
        std::cout << arr[i] << (i == count - 1 ? "" : ", ");
    }
    std::cout << "\n---------------------------------------------------------------------\n";
}

int main() {
    std::vector<int> array(ARRAY_SIZE);


    populate_random_array(array);

    std::cout << "Massive size " << ARRAY_SIZE << " random input done (1 до 1000).\n";

    std::cout << "\n--- Massive before sorting (first 10 elements) ---\n";
    print_array_sample(array, 10);


    bubble_sort(array);

    std::cout << "\n Sorting is done.\n";
    print_array_sample(array, 10);

    return 0;
}
