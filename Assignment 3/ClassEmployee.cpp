#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    string name;
    double salary;

public:
    // Constructor
    Employee(string n, double s) : name(n), salary(s) {}

    
    Employee &increaseSalary(double amount)
    {
        this->salary += amount;
        return *this;
    }

    
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main()
{

    Employee *emp = new Employee("John Doe", 5000.0);
    emp->increaseSalary(1000).increaseSalary(500);

    emp->display();
    delete emp;
    return 0;
}
