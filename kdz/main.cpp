#include <iostream>
#include <fstream>
#include "haffman.h"
int main() {
    Haffman h;
    h.encode("01", "output.txt");
    Haffman m;
    m.decode("output.txt", "un.txt");
    std::cout << "Hello, World!" << std::endl;
    return 0;
}