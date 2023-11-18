#include<iostream>
#include<vector>
#include<limits.h>
#include<set>
#include<string.h>
#include<algorithm>
using namespace std;
class Human{
    public:
     void speak(){
        cout<<"Im speaking";
    }
};
class Dog:public Human{
    public:
    void speak(){
        cout<<"Im barking"; 
    }
};
int main()
{
//    Dog d1;
//    d1.speak();
//    Human* a=new Dog();
//    a->speak();
   Dog* d=(Dog*)new Human();
   d->speak();
 return 0;
}