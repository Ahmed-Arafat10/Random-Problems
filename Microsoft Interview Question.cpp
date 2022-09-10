#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200001;
int arr[N];
int row,col;
void ChangeRowCol(int arr[],int r,int c){
    for(int i=(r*col);i<col;i++){
        if(arr[i]!=0)
            arr[i]=-1;
    }
    for(int i=0,j=0,k=0;k<(col*row);k++,i++){
         if(arr[k]!=0&&c==i)
            arr[k]=-1;
        if(i==col-1){
        i=-1;
        j++;
            }
    }
}

int main()
{
cin>>row>>col;
///Input of N*M Array
for(int i=0,j=0,k=0;k<(col*row);k++,i++){
    //ll x;
    cin>>arr[k];
    if(i==col-1){
        i=-1;
        j++;
    }
}
///
for(int i=0,j=0,k=0;k<(col*row);k++,i++){
    //ll x;
    if(arr[k]==0){
        ChangeRowCol(arr,j,i);//Row then Col.
    }
    if(i==col-1){
        i=-1;
        j++;
    }
}
for(int i=0,j=0,k=0;k<(col*row);k++,i++){
    //ll x;
    if(arr[k]==-1){
     arr[k]==0;
    }
    cout<<arr[k]<<" ";
    if(i==col-1){
        i=-1;
        j++;
    }
}

    cout << "Hello world!" << endl;
    return 0;
}
