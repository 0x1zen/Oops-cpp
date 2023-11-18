#include<iostream>
#include<vector>
#include<limits.h>
#include<set>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    // const int x=10;
    // x=25;
    /* 
    & Method 1 Const data Non const Pointer
    */
    // const int *a=new int(2);
    // cout<<*a<<endl;
    // delete a;
    // int b=10;
    // a=&b;
    // cout<<*a<<endl;
    /*
    & Method 2 Const Pointer and Non const data 
    */
    int *const a=new int(2);
    cout<<*a<<endl;
     *a=10;
     cout<<*a;
 return 0;
}