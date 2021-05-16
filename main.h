#pragma once

void printArray(int*, size_t);
void printArrays(int**, size_t, size_t);
int* initArray(size_t&);
int** initArrays(size_t&, size_t&);
void fillArrays(int**, size_t, size_t);
void clearPtrArray(int*);
void clearPtrArrays(int**, size_t);
char randChar();
void fillFile(std::ofstream&);
void createFile(std::string);

