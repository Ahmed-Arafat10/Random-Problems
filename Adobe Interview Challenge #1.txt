#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
       ->Adobe Interview Challenge | Q-40
       Q: Given an array A of +ve integers.Find the leaders in the array. An element pf array is
       leader if it is greater than or equal to all the elements to it is greater than or equal
       to all the elements to its right side.
       - Example

            I/P : A[] = {16,17,4,3,5,2}
            O/P : 17 5 2

            I/P : A[] = {1,2,3,4,0}
            O/P : 4 0
*/
int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    stack<ll>s1;
    for(ll i =0; i<n; i++) cin>>arr[i];
    ll mx = arr[n-1];
    s1.push(arr[n-1]);
    for(ll i = n-2; i>= 0; i--)
    {
        if(arr[i] >= mx)
        {
            mx = arr[i];
            s1.push(arr[i]);
        }
    }
    while(!s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }
}


