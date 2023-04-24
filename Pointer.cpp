#include <iostream>

void pointerausgabe(auto *x)
{
    *x += 1;
    std::cout << "ausgabe in funktion : " << *x << std::endl;
}

int main()
{

    int *intPointer = nullptr;
    int num = 10;
    intPointer = &num;
    /*
        std::cout << num << std::endl;
        std::cout << intPointer << std::endl;
    */
    std::string *stringPointer = nullptr;
    std::string strPoint = "Hallo welt ";

    stringPointer = &strPoint;
    std::string &ref = strPoint;
    /*
        std::cout << "stringPointer Addy " << stringPointer << std::endl;
        std::cout << "stringPointer Wert " << *stringPointer;
    */
    //------------------Intialiesierung----------------------------------------1
    int *ersterPoint = nullptr;         //
    double *dobPinter = nullptr;        //
    std::string *strPointer2 = nullptr; //
    float *fPointer = nullptr;
    int *Pointerübung1 = nullptr;
    int *PointerÜbung2 = nullptr;
    double *PointerÜbung3 = nullptr;

    //_________________________________________________________2
    int pNum = 100;
    double dNum = 100.99;
    std::string strST = "Pointer ubung ";
    float fNum = 0.99;
    //________________________Pointer referenz__________________________________________2.5
    ersterPoint = &pNum;
    dobPinter = &dNum;
    strPointer2 = &strST;
    fPointer = &fNum;
    Pointerübung1 = &pNum;
    PointerÜbung2 = &pNum;
    PointerÜbung3 = &dNum;
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

    std::cout << Pointerübung1 << std::endl;
    std::cout << PointerÜbung2 << std::endl;
    std::cout << PointerÜbung3 << std::endl;

    // pointerausgabe(ersterPoint);

    //________________________References______________________________
    /*
        int a = 10;
        int &aRef = a;
        double b = 1.99;
        double &bref = b;
        int c = 20;
        int &cref = c;

        std::cout << a << std::endl;
        aRef++;
        std::cout << aRef << std::endl;
        bref++;
        std::cout << bref << std::endl;
    */

    //________________Pointer_Funktionen__________________________________

    std::cout << "vorher " << *Pointerübung1 << std::endl;
    *Pointerübung1 += 2;
    std::cout << "Nacher " << *Pointerübung1 << std::endl;
    pointerausgabe(Pointerübung1);
    std::cout << "Nach funktion" << *Pointerübung1 << std::endl;

    int numA = 10;
    pointerausgabe(&numA);
    std::cout << numA;
}