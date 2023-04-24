#include <iostream>

int main()
{

    int *intPointer = nullptr;
    int num = 10;
    intPointer = &num;

    std::cout << num << std::endl;
    std::cout << intPointer;
}