#include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    if(age>115||age<1)
    cout<<"Invalid age";
   else if(age>=18)
    cout<<"you can vote.";
   else
   cout<<"You can not vote.";
    return 0;
}