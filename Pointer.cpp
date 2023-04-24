#include <iostream>

void pointerausgabe(auto *x)
{
    std::cout << "ausgabe: " << *x;
}

int main()
{

    int *intPointer = nullptr;
    int num = 10;
    intPointer = &num;

    std::cout << num << std::endl;
    std::cout << intPointer << std::endl;

    std::string *stringPointer = nullptr;
    std::string strPoint = "Hallo welt ";

    stringPointer = &strPoint;
    std::string &ref = strPoint;
    /*
        std::cout << "stringPointer Addy " << stringPointer << std::endl;
        std::cout << "stringPointer Wert " << *stringPointer;
    */
    //------------------Intialiesierung----------------------------------------1
    int *ersterPoint = nullptr;
    double *dobPinter = nullptr;
    std::string *strPointer2 = nullptr;

    //_________________________________________________________2
    int pNum = 100;
    double dNum = 100.99;
    std::string strST = "Pointer ubung ";

    //________________________Pointer referenz__________________________________________2.5
    ersterPoint = &pNum;
    dobPinter = &dNum;
    strPointer2 = &strST;
    /*
        //________________________Speicher adresse_________________________________3
        std::cout << "Int pointer addresse: " << ersterPoint << std::endl;
        std::cout << "double pointer addresse: " << dobPinter << std::endl;
        std::cout << "string Pointer addresse: " << strPointer2 << std::endl;
        //__________________________Wert_______________________________4
        std::cout << "int pointer wert = " << *ersterPoint << std::endl;
        std::cout << "int pointer wert = " << *dobPinter << std::endl;
        std::cout << "int pointer wert = " << *strPointer2 << std::endl;
    */

    pointerausgabe(ersterPoint);
}