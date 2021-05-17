#include <iostream>
#include <fstream>
#include <string>

std::string readFile(std::string file_name) {
    std::string line;

    std::ifstream in(file_name + ".txt");
    if (in.is_open()) {
        (getline(in, line));
    }
    else {
        std::cerr << "File don't open!" << std::ends;
    }
    in.close();


    return line;
}

