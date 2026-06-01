#include <iostream>
using namespace std;
class employee
{
public:
    string name;
    int salary;

    employee(string n, int s)
    // employee(string name,int salary)
    {
        this->name = n;
        this->salary = s;
        // this->name=name;
        // this->salary=salary;
    }

    void printdetails() // method --- in this "this->" is used to access the elements.
    {
        cout << "1. The name of our first employ is " << this->name << " and his salary is " << this->salary << " Dollar" << endl;
    }
};
int main()
{
    employee details("Himanshu", 300);
    details.printdetails();
    // details.name="Himanshu";
    // details.salary=100;
    // details.printdetails();//varaible_name.method(function)_name is used then it will print the result.
    return 0;
}