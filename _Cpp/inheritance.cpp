#include <iostream>
using namespace std;
class employee
{
public:
    string name;
    int salary;

    employee(string n, int s,int sp)
    {
        this->name = n;
        this->salary = s;
        this->secretpassword=sp;
    }

    void printdetails() // method --- in this "this->" is used to access the elements.
    {
        cout << "1. The name of our first employ is " << this->name << " and his salary is " << this->salary << " Dollar" << endl;
    }

    void getsecretpassword()
    {
        cout << "2. The secret password of employee is: " << this->secretpassword << endl;
    }

private:
    int secretpassword;
};

class programmer: public employee
{
    public:
        int errors;
};
int main()
{
    employee details("Himanshu constructor",300, 344564);
    details.printdetails();
    // cout<<details.secretpassword;  // can not access private like this 
    details.getsecretpassword();      //can access private through public method in class.
    return 0;
}