#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
// hint : use 2 passes of bubble sort
int main()
{
    ll n;
    cin>>n;
    ll Fmx = INT_MIN, Smx = INT_MIN ;
    ll Fidx, Sidx;
    for(ll i =0; i<n; i++)
    {
        ll x;
        cin>>x;
        if(x > Fmx && Fmx == INT_MIN) Fmx = x, Fidx = i;
        else if(x > Fmx) Smx = Fmx, Fmx = x, Sidx = Fidx, Fidx = i;
        else if(x != Fmx && Smx == INT_MIN)Smx = x,Sidx = i;
        else if(x == Smx)Sidx = i;// if you want last second max num
        else if(x == Fmx)Fidx = i;// if you want last First max num
    }
    if (Smx != INT_MIN)
    cout<<"Numer is : "<<Smx<<"\nIdx is :"<<Sidx<<"\n";
    else cout<<"NO Sec Max Number!!!\n";

 }
