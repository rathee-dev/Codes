#include <iostream>
using namespace std;
class employee //Object-employee
{
public:
    string name;
    int salary;
}; 
int main()
{
    employee details;
    details.name="Himanshu";
    details.salary=100;
    cout << "1. aThe name of our first employ is " <<details.name<<" and his salary is "<<details.salary<<" Dollar"<< endl;
    return 0;
}