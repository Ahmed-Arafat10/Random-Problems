#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll n , k ,cnt = 0;
ll const N = 1e9;
vector<char> arr(N);
void BackTracking(ll x)
{
    if(cnt == k-1)
    {
        cout<<"FOUND: ";
         cout<<arr[0]<<arr[1]<<arr[2]<<" "<<cnt<<"\n";
         system("pause");
    }
    if(x == n)
    {
        cout<<arr[0]<<arr[1]<<arr[2]<<" "<<cnt<<"\n";
        cnt++;
        return;
    }

for(char c='a';c<='z';c++)
{
    arr[x] = c;
    BackTracking(x+1);
}

}

int main()
{

cin>>n>>k; 
BackTracking(0);
return 0;
}
