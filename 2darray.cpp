#include<iostream>
#include<vector>
#include<limits.h>
#include<set>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    int row=5;
    int col=5;
    int** arr=new int*[row];

    for(int i=0;i<row;++i){
        arr[i]=new int[col];
        for(int j=0;j<col;++j){
            arr[i][j]=0;
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
        // Freeing the memory
    for (int i = 0; i < row; ++i) {
        delete[] arr[i];
    }
    delete[] arr;
    // 2d vector
    vector<vector<int> >brr(5,vector<int>(5,0));
 return 0;
}