#include <string>
#include <fstream>
#include "main.h"

void createFile(std::string str) {
    std::ofstream fout(str);
    fillFile(fout);
    fout.close();
}

