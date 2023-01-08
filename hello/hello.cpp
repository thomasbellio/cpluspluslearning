// Hello app is basic app to test out compilation
// Pre-processor command #include
#include <iostream>
#include <string>

/**
 * @brief A basic hello world application in C++. This program is a console application that
 *        demonstrates basic console input and output
 * @return Returns 0 when execution successfully completes
 */
int main()
{
    std::string name;
    std::cout << "Type your name" << std::endl;
    std::cin >> name;
    std::cout << "Hello, " << name << std::endl;
    return 0;
}