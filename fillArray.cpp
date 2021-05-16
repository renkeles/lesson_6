#include <iostream>
#include <ctime>

void fillArrays(int** arr, size_t size_row, size_t size_column) {
    srand(time(0));
    for (int i = 0; i < size_row; i++) {
        for (int j = 0; j < size_column; j++) {
            arr[i][j] = (rand() % 100 + 1) & 0x1;
        }
    }
}

