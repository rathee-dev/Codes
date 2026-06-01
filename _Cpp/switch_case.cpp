#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter the age: ";      
    cin >> age;

   switch (age) {
       case 12:
           cout << "The age is 12 years: " << endl;
           
           break;
   
       case 18:
           cout << "The age is 18 years: " << endl;
           
           break;
   
       default:
           cout << "The age is neither 18 nor 12: " << endl;
           
           break;
   }
   
    
    return 0;
}