#include <fstream>
#include "main.h"

void fillFile(std::ofstream &fout) {
    int rand_size = (rand() % (100 - 51) + 50);
    for (int i = 0; i < rand_size; i++) {
        fout << randChar();
    }
}

