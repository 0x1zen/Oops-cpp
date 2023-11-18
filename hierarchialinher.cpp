#include<iostream>
using namespace std;
class car{
   public:
   int wheels;
   int headlights;
   void speed(){
    cout<<"Speeding";
   }
};
class Fortuner : public car{
    public:

};
class Alto: public car{
   public:
};

int main()
{
Alto A1;
Fortuner F1;
A1.speed();
cout<<endl;
F1.speed();
 return 0;
}