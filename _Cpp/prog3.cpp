
#include <iostream>
using namespace std;
   class Add{
       public:
            int number;
            Add(int value=0){
                number=value;
            }
       Add operator +(Add obj){
           return number=number+obj.number;
       }
    };
    int main(){
        Add a(10),b(20);
        Add c=a+b;
        cout<<"The value of object A + B is :"<<c.number<<endl;
    return 0;
}