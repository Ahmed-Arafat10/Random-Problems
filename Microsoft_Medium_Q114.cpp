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


/*
Microsoft   Q-114
Medium
Q: you are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order
and each of their nodes contains a single digit
Add the two numbers and return the sum as a linked list

You assume the two number do not contain any leading zero, except the number 0 itself

I/P:
L1 = {9,9,9,9,9,9,9} , L2 = {9,9,9,9}

O/P -> 8 9 9 9 0 0 0 1

*/

struct Node
{
    ll val;
    Node *next;
}*L1 = NULL, *L2 = NULL, *L3 = NULL, *last = NULL;


void Display(Node *p)
{
    while(p)
    {
        printf("%ld ",p->val);
        p = p->next;
    }
    puts("");
}

Node* Create(ll arr[], ll n)
{
    Node *t = new Node,*Head = NULL, *last = NULL;
    t->val = arr[0];
    t->next = NULL;
    Head = last = t;
    for(ll i =1; i<n; i++)
    {
        t = new Node;
        t->val = arr[i];
        t->next = NULL;
        last->next = t;
        last = last->next;
    }
    return Head;
}

void solve(Node *l1, Node *l2, ll remind)
{
    ll sum = remind;
    if(l1) sum += l1->val, l1 = l1->next;
    if(l2) sum += l2->val, l2 = l2->next;
    if(!l1 && !l2 && !remind) return;
    ll digit = sum % 10;
    Node *t = new Node;
    t->next = NULL;
    t->val = digit;
    last->next = t;
    last = last->next;
    digit = sum/10 ;
    solve(l1, l2, digit);
}

int main()
{
    ll arr1[] = {9,9,9,9,9,9,9};
    ll n1 = sizeof(arr1)/sizeof(arr1[0]);

    ll arr2[] = {9,9,9,9};
    ll n2 = sizeof(arr2)/sizeof(arr2[0]);

    L1 = Create(arr1,n1);
    L2 = Create(arr2,n2);

    L3 = new Node;
    L3->val = -1;
    L3->next = NULL;
    last = L3;

    Display(L1);
    Display(L2);

    solve(L1,L2,0);

    Display(L3->next);
}
/*

I/P:
9 9 9 9 9 9 9
9 9 9 9

O/P:
8 9 9 9 0 0 0 1

*/
