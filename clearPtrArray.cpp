#include <iostream>

void clearPtrArray(int* arr) {
    delete[] arr;
    arr = nullptr;
}

void clearPtrArrays(int** arr, size_t size_column) {
    for (size_t i = 0; i < size_column; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    arr = nullptr;
}

