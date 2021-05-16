#include <iostream>
#include <ctime>
#include "main.h"

#define END std::cout << std::endl;

int main()
{
    srand(time(0));
    //================================================================
    // TASK 1
    //================================================================
    size_t size = 0;
    int* arr = initArray(size);
    printArray(arr, size);
    clearPtrArray(arr);
    END;
    //================================================================

    //================================================================
    // TASK 2
    //================================================================
    size_t size_row = 4;
    size_t size_column = 4;
    int** arr4_4 = initArrays(size_row, size_column);
    fillArrays(arr4_4, size_row, size_column);
    printArrays(arr4_4, size_row, size_column);
    clearPtrArrays(arr4_4, size_column);
    END;
    //================================================================

    //================================================================
    // TASK 3
    //================================================================
    std::string file_name = "";
    std::cout << "Enter name first file without .txt: ";
    std::cin >> file_name;
    createFile(file_name + ".txt");
    std::cout << "Enter name second file without .txt: ";
    std::cin >> file_name;
    createFile(file_name + ".txt");
    END;
    //================================================================

}
