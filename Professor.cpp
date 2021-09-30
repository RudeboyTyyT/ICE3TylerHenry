/**
 * Project OOP3200-F2020-Lesson4
 * @author Tyler Henry
 * @version 1.0
 */


#include "Professor.h"

#include <iostream>

/**
 * Professor implementation
 */


/**
 * @param first_name
 * @param last_name
 * @param age
 * @param employee_id
 */
Professor::Professor(const std::string& first_name, const std::string& last_name, const float age, const std::string employee_id):
	Person(first_name, last_name, age), m_employeeID(employee_id)
{
}

/**
 * @return std::string
 */
std::string Professor::getEmployeeID() const
{
    return m_employeeID;
}

/**
 * @param value
 */
void Professor::setEmployeeID(const std::string& value)
{
    m_employeeID = value;
}

/**
 * @return void
 */
void Professor::Teaches() const
{
    std::cout << getFirstName() << " is teaching!" << std::endl;
}

/**
 * @return std::string
 */
std::string Professor::ToString()
{
    std::string output_string;

    output_string += Person::ToString();
    output_string += "---------------------------------------\n";
    output_string += "Employee ID: " + getEmployeeID() + "\n";
    output_string += "---------------------------------------\n";

    return output_string;
}