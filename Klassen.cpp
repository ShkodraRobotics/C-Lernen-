#include <iostream>
class Übung
{

private:
    std::string name;
    int alter;

public:
    Übung(std::string name, int alter)
    {
        this->name = name;
        this->alter = alter;
    }

    int getAlter()
    {
        return this->alter;
    }
    std::string getName()
    {
        return this->name;
    }
    void setAlter(int alter)
    {
        this->alter = alter;
    }
    void setName(std::string name)
    {
        this->name = name;
    }
};

int main()
{

    Übung a("Lorik", 28);

    std::cout << a.getName();
    std::cout << a.getAlter();

    return 0;
}