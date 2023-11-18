#include<iostream>
#include<vector>
#include<limits.h>
#include<set>
#include<string.h>
#include<algorithm>
using namespace std;
class Param{
    public:
    int val;
    void operator+(Param& obj2){
        int value1=this->val;
        int value2=obj2.val;
        cout<<(value2-value1);
    }
};
int main()
{
    Param obj1;
    Param obj2;
    obj1.val=3;
    obj2.val=5;
    obj1+obj2;
 return 0;
}