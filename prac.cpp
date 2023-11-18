#include<iostream>
#include<vector>
#include<limits.h>
#include<set>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>arr{0,2,0,0,1,0,2,2,0,1,1,2,2};
    int start=0;
    int end=arr.size()-1;
    while(start<=end){
        if(arr[start]==2){
            swap(arr[start],arr[end]);
            end--;
        }
        else if(arr[start]==0){
            start++;
        }
        // else if(arr[start]==1){

        // }
    }
    for(auto it:arr){
        cout<<it<<endl;
    }
 return 0;
}