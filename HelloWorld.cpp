#include <iostream>

void arrayFiller(int x[][10], int size)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {

            x[i][j] = j;
        }
    }
}
void arrayPrinter(int x[][10], int size)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            std::cout << x[i][j];
        }
        std::cout << std::endl;
    }
}

int main()
{
    /*
        int a = 10;

        std::cout << a << std::endl;

        std::cout << &a;
        */
}