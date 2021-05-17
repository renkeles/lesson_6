#include <string>
#include <fstream>
#include <iostream>
#include "main.h"

void createFile(std::string str, bool flag) {
    std::ofstream fout(str + ".txt");
    if(flag){
        fillFile(fout);
        std::cout << "Created" << std::endl;
    }
    fout.close();
}

