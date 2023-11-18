#include<iostream>
using namespace std;
class Toyota{
    public:
  int wheels;
  Toyota(){
    this->wheels=4;
  }
  
  void running(){
    cout<<"Running";
  }
};
class Fortuner : public Toyota{
    public:
    int headlights;
    Fortuner(){
        this->headlights=2;
    }
    
} ;
class Legender : public Fortuner{
    public:
    int engineType;
    Legender(){
        this->engineType=1;
    }

};
int main()
{
Legender l1;
Fortuner f1;
cout<<f1.headlights<<endl;
cout<<l1.wheels<<endl;
l1.running();
 return 0;
}