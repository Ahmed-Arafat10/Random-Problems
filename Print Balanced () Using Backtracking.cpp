#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
char c[10];
stack<char>st;
void Generate(ll n,ll limit, ll openP,ll closeP)
{
    if(n == limit)
    {
        if(openP == closeP)
        {
            for(ll i =0; i<limit; i++) cout<<c[i];
            cout<<st.size();
            puts("");
        }
        return;
    }
    c[n] = '(';
    st.push('(');
    Generate(n+1,limit,openP+1,closeP);
    st.pop();
    if(st.size() && st.size() - closeP != 0)
    {
        c[n] = ')';
        Generate(n+1,limit,openP,closeP+1);
    }
}

void Generate1(ll n,ll limit, ll openP)
{
    cout<<n<<"\n";
    if(n == limit)
    {
        if(openP == 0)
        {
            //for(ll i =0; i<limit; i++) cout<<c[i];
            //puts("");
        }
        return;
    }
    c[n] = '(';
    Generate1(n+1,limit,openP+1);
    if(openP)
    {
        c[n] = ')';
        Generate1(n+1,limit,openP-1);


    }
}
int main()
{
    Generate1(0,20,0);
}
