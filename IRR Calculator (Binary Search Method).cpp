#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
ld PresentValue(ld *CashFlow,ll &sz, ld IRR)
{
    ld res = 0;
    for(ll i=0;i<sz;i++)
    {
        ld Pow = pow((1+IRR),(i+1));
        res +=(CashFlow[i]/Pow);
    }
    return res;
}
int main()
{
    cout<<fixed<<setprecision(2);
    ///Just change Cash Inflow Of Your Project in Array
    ld CashFlow[] = {190000000,180000000,170000000,160000000,140000000,160000000};
    //ld CashFlow[] = {180000000,180000000,180000000,180000000,180000000,180000000};
    ll Years = sizeof(CashFlow)/sizeof(CashFlow[0]);
    ///Just change Initial Investment Of Your Project
    ld InitialInvest = 320000000;//350000000
    ld l = 0 , r = 200;
    ld IRR = ((l+r)/2);
    while(l <= r)
    {
        IRR = ((l+r)/2);
       //cout<<"MID :"<<mid<<"\n";
       ll res = PresentValue(CashFlow,Years,IRR/100);
       if(res == InitialInvest)
       {
           cout<<"FOUND IRR = "<<IRR<<"%\n";
           system("pause");
           return 0;
       }
       else if(res > InitialInvest)   l = IRR;
       else if(res < InitialInvest)   r = IRR;
    }
}
