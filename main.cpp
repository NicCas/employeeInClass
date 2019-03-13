/*
 * Write a class named Employee that has the following member variables:
 *      • name. A string that holds the employee’s name.
 *      • idNumber. An int variable that holds the employee’s ID number.
 *      • department. A string that holds the name of the department where the employee works.
 *      • position. A string that holds the employee’s job title.
 * The class should have the following constructors:
 *      • A constructor that accepts the following values as arguments and assigns them to the appropriate member variables: employee’s name, employee’s ID number, depart- ment, and position.
 *      • A constructor that accepts the following values as arguments and assigns them to the appropriate member variables: employee’s name and ID number. The department and position fields should be assigned an empty string ("").
 *      • A default constructor that assigns empty strings ("") to the name, department, and position member variables, and 0 to the idNumber member variable.
 * Write appropriate mutator functions that store values in these member variables and accessor functions that return the values in these member variables. Once you have written the class, write a separate program that creates three Employee objects to hold the following data.
 *
 *      Name            ID Number       Department          Position
 *
 *      Susan Meyers    47899           Accounting          Vice President
 *      Mark Jones      39119           IT                  Programmer
 *      Joy Rogers      81774           Manufacturing       Engineer
 *
 * The program should store this data in the three objects and then display the data for each employee on the screen.
 */

#include <iostream>

using namespace std;

class Employee {
private:
    string name;
    int idNumber;
    string department;
    string position;

public:
    Employee (string n, int i, string d, string p);
    Employee (string n, int i);
    Employee();

    void printEmp () const;

};

void Employee::printEmp() const{
    cout << "   " << name << "   " << idNumber << "   " << department << "   " << position << endl;
}

int main() {
    //Declare Objects
    Employee emplyA = {"Susan Meyers", 47899, "Accounting", "Vice President"};
    Employee emplyB = Employee ("Joy Rogers", 81774, "Manufacturing", "Engineer");
    Employee emplyC = Employee ("Mark Jones", 39119);
    Employee emplyD = Employee ();

    //Print Objects
    emplyA.printEmp();
    emplyB.printEmp();
    emplyC.printEmp();
    emplyD.printEmp();

    return 0;
}

//Assign values to all variables
Employee::Employee (string n, int i, string d, string p) {
    name = n;
    idNumber = i;
    department = d;
    position = p;
};

//Assign values to name variables and id variables
Employee::Employee (string n, int i) {
    name = n;
    idNumber = i;
};

//Fill all variables as blank
Employee::Employee(){
    name = "";
    idNumber = 0;
    department = "";
    position = "";
};