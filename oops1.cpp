#include<iostream>
using namespace std;
class Animal{
   private:
   int weight;
    public:
   int age;
   string name;

   int getWeight(int weight){
      return weight;
   }

   void setWeight(){
     this->weight=weight;
   }
   Animal(){
      this->age=19;
      this->name="Lion";
      this->weight=80;
   }
   Animal(int age,int weight,string name){
      this->age=age;
      this->weight=weight;
      this->name=name;
      cout<<"Im inside parameterized Constructor";
   }
   void eat(){
    cout<<"Eating";
   }
   Animal(Animal& obj){
      this->age=obj.age;
      this->weight=obj.weight;
      this->name=obj.name;
      cout<<"Parameterized constereuctor called";
   }
   ~Animal(){
      cout<<"Destructor is called";
   }
};
int main()
{

   // Animal a;
   // Animal* b=new Animal(10,30,"Gangubai");
   // cout<<endl;

   // cout<<b->name<<endl;
   // cout<<b->age<<endl;
   // cout<<b->getWeight(30)<<endl;
   // Animal animal1=b;
   // Animal a;
   // a.age=5;
   // Animal*b=new Animal;
   // b->age=20;
   // delete b;
   Animal a;
   Animal b(a);
    cout<<b.age;

   // Animal* b=new 
   
   // cout<<a.age<<endl;
   // cout<<a.getWeight(30)<<endl;
   // cout<<a.name<<endl;

   // Animal* b=new Animal;
   // b->age=18;
   // cout<<b->age<<endl;
   // (*b).name="billi";
   // cout<<(*b).name;
   // a.setWeight(900);
   // cout<<a.getWeight()<<endl;
   // cout<<a.age<<endl;
   // a.eat();
return 0;
}