#include <iostream>
using namespace std;
   class Base{
       public:
            Base(){
                cout<<"Base class constructor"<<endl;
             }
             virtual ~Base(){
                cout<<"Base class Destructor"<<endl;
            }
    };
    class child:public Base{
        public:
            child(){
                cout<<"Child class constructor"<<endl;
            }
             ~child(){
                cout<<"Child class Destructor"<<endl;
            }
    };
    int main(){
        Base *p;
        p=new child();
        delete p;
    return 0;
}