#include<iostream>
using namespace std;
class A{
    public:
    int maths;
    A(){
        maths=100;
    }
};
class B{
    public:
    int maths;
    B(){
        maths=50;
    }
};
class C: public A,public B{
    public:
    int total;
    C(){
        total=150;
    }
};
int main()
{
C obj;
cout<<obj.A::maths<<endl;
cout<<obj.B::maths<<endl;
cout<<obj.total<<endl;

 return 0;
}