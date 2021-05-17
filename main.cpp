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
    std::cout << "TASK 1" << std::endl;
    size_t size = 0;
    int* arr = initArray(size);
    printArray(arr, size);
    clearPtrArray(arr);
    END;
    //================================================================

    //================================================================
    // TASK 2
    //================================================================
    std::cout << "TASK 2" << std::endl;
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
    std::cout << "TASK 3" << std::endl;
    std::string file_name = "";
    std::cout << "Enter name first file without .txt: ";
    std::cin >> file_name;
    createFile(file_name, true);
    std::cout << "Enter name second file without .txt: ";
    std::cin >> file_name;
    createFile(file_name, true);
    END;
    //================================================================

    //================================================================
    // TASK 4
    //================================================================
    std::cout << "TASK 4" << std::endl;
    std::string first_file_name = "";
    std::cout << "Enter name first file without .txt: ";
    std::cin >> first_file_name;
    std::string second_file_name = "";
    std::cout << "Enter name second file without .txt: ";
    std::cin >> second_file_name;
    std::string final_file_name = "";
    std::cout << "Enter name final file without .txt: ";
    std::cin >> final_file_name;
    createFile(final_file_name, false);

    fillFile(final_file_name, first_file_name);
    fillFile(final_file_name, second_file_name);
    END;
    //================================================================

    //================================================================
    // TASK 5
    //================================================================
    std::cout << "TASK 5" << std::endl;
    std::string file_for_search = "";
    std::cout << "Enter name file for search without .txt: ";
    std::cin >> file_for_search;
    std::string text_search = "";
    std::cout << "Search (only a-z): ";
    std::cin >> text_search;

    std::string line = readFile(file_for_search);
    std::cout << "Search on position: " << (int)line.find(text_search) << std::endl;
    END;
    //================================================================

}
