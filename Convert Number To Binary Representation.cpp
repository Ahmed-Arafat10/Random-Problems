#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{   
   ll n;
    cin>>n;
	if(n == 0) cout<<0;
    stack<ll>st;
    //cout<<"0000000000000";
    while(n != 0)
    {
        if(n & 1)
        {
            st.push(1);
            n /= 2;
        }
        else
        {
            st.push(0);
            n /= 2;
        }
    }
    while(st.size())
    {
        cout<<st.top();
        st.pop();
    }

}
