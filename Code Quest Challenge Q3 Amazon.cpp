// Created by Ahmed Arafat on 3/31/2023.
// Amazon Easy problem
// swap two elements in a linked list
// In: 1 2 2 4 5 6 7 8
// Out: 2 1 4 2 6 5 8 7
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
struct Node
{
    int val;
    Node *next;
}*Head;


Node* CreateLinkedList(ll *arr,ll sz)
{
    Node *h = new Node , *t = nullptr , *last = h;
    h->val = arr[0] , h->next = nullptr;

    for(ll i =1;i<sz;i++)//1 2 2 4 5 6 7 8
    {
        t = new Node;
        t->val = arr[i] , t->next = nullptr;
        last->next = t;
        last = last->next;
    }
    return h;
}

void PrintLinkedList(Node *p)
{
    while(p)
    {
        cout<<p->val<<" ";
        p = p->next;
    }
    puts("");
}

void solve(Node *p)
{
    while(p)
    {
        ll cur = p->val;
        p->val = p->next->val;
        p->next->val = cur;
        p = p->next->next;
    }
}
int main()
{
    ll arr[] = {1,2,2,4,5,6,7,8};
    Head = CreateLinkedList(arr,sizeof(arr)/sizeof(arr[0]));
    solve(Head);
    PrintLinkedList(Head);
}