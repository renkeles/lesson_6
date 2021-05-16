#include <iostream>

char randChar() {
    int r = rand() % 26;
    char c = 'a' + r;
    return c;
}
