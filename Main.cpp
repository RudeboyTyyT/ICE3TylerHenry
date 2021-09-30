// ICE3TylerHenry.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Person.h"
#include "Professor.h"
#include "Student.h"

int main()
{
    Person person = Person("Bob", "Smith", 35.6f);
    person.SaysHello();

    std::cout << person.ToString() << std::endl;

	Student student = Student("Mike", "Jones", 22.0f, "MJ123456789");

    student.SaysHello();
    student.Studies();

    std::cout << student.ToString() << std::endl;

    Professor professor = Professor("Andrew", "Hogue", 38.0f, "AH123456789");
    professor.SaysHello();
    professor.Teaches();

    std::cout << professor.ToString() << std::endl;
}

