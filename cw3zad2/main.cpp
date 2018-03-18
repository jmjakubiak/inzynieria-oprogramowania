// cw 3 zad 2
#include <iostream>
#include "TStudent.h"
#include "TStudent.cpp"
#include "TUniversity.h"
#include "TUniversity.cpp"

using namespace std;

int main()
{
    TStudent* stud = new TStudent();
    stud->setAge(20);
    stud->setName("Jan Jakubiak");
    cout << stud->getName() << " " << stud->getAge() << endl;

    TUniversity* un = new TUniversity();
    un->attach(stud);
    un->printData(0);
    un->setData(0,"Kowalski", 40);
    un->printData(0);
    un->detach();
    un->printData(0);
    return 0;
}
