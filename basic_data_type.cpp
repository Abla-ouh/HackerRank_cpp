#include <iostream>
#include <cstdio>
#include <sstream>
#include <string>
using namespace std;

int main() {
    // Complete the code
    std::string line;
    while (std::getline(std::cin, line))
    {
        string word;
        istringstream iss(line);
        while (iss >> word)
            std::cout << word << std::endl;        
    }
    return 0;
}
