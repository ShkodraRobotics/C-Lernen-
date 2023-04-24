#include <iostream>

struct stStudent
{
    std::string name;
    int alter;
} s2, s3; //_____________________Ob gleich mit der struct erstellen

stStudent fillSt(std::string name, int alter)
{
    stStudent s;
    s.alter = alter;
    s.name = name;
    return s;
} //______________________________ähnlich wie ein Konsturktor erstellt ein struct und füült es

void printEr(stStudent x)
{
    std::cout << x.alter << std::endl;
    std::cout << x.name << std::endl;
}

void arrPrint(stStudent x[])
{
    for (int i = 0; i < 3; i++)
    {
        std::cout << x[i].alter;
        std::cout << x[i].name;
    }
}

int main()
{

    //__Erstellen_einesstruct_objeckt__________
    stStudent s1;
    //____Membervar________
    s1.alter = 12;
    s1.name = "Lorik";
    //_______________
    s2.name = "Lisa";
    s2.alter = 12;
    //_______________

    s3 = {"Dennis", 13};

    printEr(s1);
    printEr(s2);
    printEr(s3);

    //__________Struct_array_____

    stStudent StudentArray[3];
    StudentArray[0] = s1;
    StudentArray[1] = s2;
    StudentArray[2] = s3;

    arrPrint(StudentArray);

    //___________Function_Konstruktor________

    stStudent s4 = fillSt("LALA", 10);

    printEr(s4);

    //________________Pointer______________________

    stStudent *stPtr = nullptr;
    stPtr = &s4;
    std::cout << (*stPtr).name; //___________Klammern sonnst funktioniert es nicht
    //______________Pfeil_anstatt_()________________________
    stPtr->alter = 34; // pointer meberVar füllen

    std::cout << stPtr->alter; // pointer member VAr ausgebe
}