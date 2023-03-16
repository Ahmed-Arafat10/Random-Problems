/// Question #1
#include <bits/stdc++.h>
using namespace std;
#define pb(x) push_back(x)
#define ff first
#define ss second
#define for0(i,n)  for(ll i = 0; i<n; i++)
#define for1(i,n)  for(ll i = 0; i<=n; i++)
#define for2(i,n)  for(ll i = 1; i<=n; i++)
#define bug1(x) cout<<"This->"<<x<<"\n";
#define bug2(x,y) cout<<x<<"-"<<y<<"\n";
#define BL puts("");
#define yes cout<<"YES"<<"\n";
#define no cout<<"NO";
typedef long long ll;
/*STLs*/
typedef vector<ll> vll;
typedef queue<ll> qll;
typedef stack<ll> stkll;
typedef pair<ll,ll> pll;
typedef set<ll> sll;
typedef map<ll,ll> mpll;
typedef vector<pair<ll,ll>> vpll;


string solution(vector<string> &A, vector<int> &B)
{
    int mx = INT_MIN;
    string res = "";
    map<string,ll>mp;
    for(ll i =0; i<(ll)B.size(); i++)
    {
        res = "";
        res += A[i][0];
        res += A[i][1];
        mp[res] += B[i];
    }
    res = "";
    for(auto &it: mp)
    {
        if(it.second > mx)
        {
            mx = it.second;
            res = it.first;
        }
    }
    return res;
}


/// Question #2
// you can use includes, for example:
// #include <algorithm>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include <bits/stdc++.h>
using namespace std;
#define pb(x) push_back(x)
#define ff first
#define ss second
#define for0(i,n)  for(ll i = 0; i<n; i++)
#define for1(i,n)  for(ll i = 0; i<=n; i++)
#define for2(i,n)  for(ll i = 1; i<=n; i++)
#define bug1(x) cout<<"This->"<<x<<"\n";
#define bug2(x,y) cout<<x<<"-"<<y<<"\n";
#define BL puts("");
#define yes cout<<"YES"<<"\n";
#define no cout<<"NO";
typedef long long ll;
/*STLs*/
typedef vector<ll> vll;
typedef queue<ll> qll;
typedef stack<ll> stkll;
typedef pair<ll,ll> pll;
typedef set<ll> sll;
typedef map<ll,ll> mpll;
typedef vector<pair<ll,ll>> vpll;
vector<string> solution(vector<string> &A)
{
    vector<string> res;
    unordered_map<string,ll>mp;
    for(ll i=0; i<(ll)A.size(); i++)
    {
        mp[A[i]] = i;
    }
    sort(A.begin(),A.end());
    ll start = -1;
    for(ll i=0; i<(ll)A.size(); i++)
    {
        if(A[i][0] == '1')
        {
            start = i;
            break;
        }
    }
    //cout<<start;
    for(ll i=0; i < start; i++)
    {
        for(ll j=start; j <(ll)A.size(); j++)
        {
            if(A[i].size() != A[j].size()) continue;
            if(A[i][0] == A[j][0]) continue;
            bool flag = true;
            for(ll k=0; k <(ll)A[i].size(); k++)
            {
                if(A[i][k] == A[j][k])
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
            {
                ll x1 = mp[A[i]], x2 =  mp[A[j]] ;
                if(x1 > x2)
                {
                    res.push_back(A[j]);
                    res.push_back(A[i]);
                }
                else
                {
                    res.push_back(A[i]);
                    res.push_back(A[j]);
                }
                return res;
            }
        }
    }
    return res;
}


/// Question #3
#include <bits/stdc++.h>
using namespace std;
#define pb(x) push_back(x)
#define ff first
#define ss second
#define for0(i,n)  for(ll i = 0; i<n; i++)
#define for1(i,n)  for(ll i = 0; i<=n; i++)
#define for2(i,n)  for(ll i = 1; i<=n; i++)
#define bug1(x) cout<<"This->"<<x<<"\n";
#define bug2(x,y) cout<<x<<"-"<<y<<"\n";
#define BL puts("");
#define yes cout<<"YES"<<"\n";
#define no cout<<"NO";
typedef long long ll;
/*STLs*/
typedef vector<ll> vll;
typedef queue<ll> qll;
typedef stack<ll> stkll;
typedef pair<ll,ll> pll;
typedef set<ll> sll;
typedef map<ll,ll> mpll;
typedef vector<pair<ll,ll>> vpll;

const ll N = 1e5+5;
// n -> number of nodes in graph [vertix]
// m -> number of edges in graph [number of connections between nodes]
ll n,m,u,v;
bool vis[N];
vector<vector<ll>> adj(N);

stack<ll>st;
ll cnt = 0, odd = 0;
ll mx = INT_MIN;

void dfs_r(ll node)
{
    //cout<<node<<"\n";
    if(node & 1) odd++;
    if(odd > 1)
    {
        odd--;
        return;
    }
    cnt++;
    mx = max(mx,cnt);
    vis[node] = 1;
    for(auto &child:adj[node])
    {
        if(!vis[child])dfs_r(child);
    }
    cnt--;
}
int solution(vector<int> &T)
{
    for(ll i = 1; i<(ll)T.size(); i++)
    {
        //cout<<T[i]<<" "<<i<<"\n";
        adj[T[i]].pb(i);
    }
    dfs_r(0);
    return mx;
}


