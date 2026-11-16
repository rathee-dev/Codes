#include <iostream>
using namespace std;
class employee//employee here is object.
{
public:
    string name;
    int salary;

   void printdetails()//method --- in this "this->" is used to access the elements.
   {
    cout << "1. The name of our first employ is " <<this->name<<" and his salary is "<<this->salary<<" Dollar"<< endl;
   }
}; 
int main()
{
    employee details;
    details.name="Himanshu";
    details.salary=100;
    details.printdetails();//varaible_name.method(function)_name is used then it will print the result.
    return 0;
}