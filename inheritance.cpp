#include<iostream>
using namespace std;
class Animal{
    public:
    int age;
};
class tiger : protected Animal{
    public:
  void print(){
    this->age=50;
    cout<<this->age;
  }
};
int main()
{
  tiger t1;
//   cout<<t1.age;
  t1.print();
 return 0;
}