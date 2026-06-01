#include <iostream>
using namespace std;
   class Demo{
        public:   
            static int count;
        Demo(){
            count++;
        }
        static void show(){
            cout<<"Total number of object created:"<<count;
        }
        };
     int Demo::count=0; 
     int main(){
         Demo obj1;
         Demo obj2;
         Demo obj3;
         Demo::show();
    return 0;
}