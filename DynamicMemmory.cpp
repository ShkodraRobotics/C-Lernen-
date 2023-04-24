#include <iostream>
int main()
{
    int *ptr = nullptr;
    int *ptr2 = nullptr;
    double *dPtr = nullptr;
    float *fPtr = nullptr;

    dPtr = new double;
    fPtr = new float;
    ptr = new int;

    *ptr = 100;
    *dPtr = 1.999;
    *fPtr = 3.89;

    std::cout << *ptr << std::endl;
    ptr2 = ptr;
    std::cout << *ptr2 << std::endl;

    // std::cout << *ptr2 << std::endl;
    // ptr2++;
    std::cout << *ptr2 << std::endl;

    delete ptr;

    *ptr = 40;
    std::cout << *ptr2 << std::endl;
    std::cout << *fPtr << std::endl;
    std::cout << *dPtr << std::endl;

    //____________________________________________________________________________________

    int *Array = nullptr;

    int size = 5;
    Array = new int[size];

    for (int i = 0; i < size; i++)
    {
        Array[i] = i;
    }

    for (int i = 0; i < size; i++)
    {
        std::cout << Array[i] << std::endl;
    }

    int *reArray = new int[size + 5];
    for (int i = 0; i < size; i++)
    {
        reArray[i] = Array[i];
    }

    delete Array;

    Array = reArray;

    for (int i = 0; i < size; i++)
    {
        std::cout << Array[i];
    }

    return 0;
}