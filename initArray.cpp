#include <iostream>
#include <cmath>

int* initArray(size_t& size) {
    std::cout << "Enter size array: ";
    std::cin >> size;
    int* arr = new (std::nothrow) int[size];
    if (arr != nullptr) {
        for (int i = 0; i < size; i++) {
            arr[i] = pow(2, i);
        }
    }
    else std::cerr << "Out of Memory!";
    return arr;
}

int** initArrays(size_t& size_row, size_t& size_column) {
    int** arr = new (std::nothrow) int * [size_row];
    if (arr != nullptr) {
        for (size_t i = 0; i < size_row; i++) {
            arr[i] = new (std::nothrow) int[size_column];
            if (arr[i] == nullptr) {
                std::cerr << "Out of Memory!";
            }
        }
    } else std::cerr << "Out of Memory!";

    return arr;
}

