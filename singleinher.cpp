#include<iostream>
#include<vector>
#include<limits.h>
#include<set>
#include<string.h>
#include<algorithm>
using namespace std;
class Animal{
   public:
   string name;
   int age;
   int weight;
   void eat(){
    cout<<" eating";
   }
};
class Lion:public Animal{

};
int main()
{

Lion l1;
cout<<l1.age;
l1.eat();
 return 0;
}