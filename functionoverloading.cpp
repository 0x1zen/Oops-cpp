#include<iostream>
#include<vector>
#include<limits.h>
#include<set>
#include<string.h>
#include<algorithm>
using namespace std;
class Maths{
    public:
    int sum(int a,int b){
        return a+b;
    }
    int sum(int a,int b,int c){
        return a+b+c;
    }
    string attach(string a,string b){
       string ans=a+" "+b;
       return ans;
    }
};
int main()
{
    Maths a;
    int ans=a.sum(10,15,10);
    cout<<ans<<endl;
    string ans2=a.attach("Raj","Dubal");
    cout<<ans2;
 return 0;
}