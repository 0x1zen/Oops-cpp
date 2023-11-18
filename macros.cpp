#include<iostream>
#include<vector>
#include<limits.h>
#include<set>
#include<string.h>
#include<algorithm>
using namespace std;
#define PI 3.141
void areaOfCircle(int r){
    cout<<PI*r*r;
}
int main()
{
int r;
cin>>r;
areaOfCircle(r);
 return 0;
}