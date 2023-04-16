// Created by Ahmed Arafat on 3/31/2023.
// Created by Ahmed Arafat on 3/31/2023.
// Amazon Easy problem
// swap two elements in a linked list
// In: 1 2 2 4 5 6 7 8
// Out: 2 1 4 2 6 5 8 7
#include <bits/stdc++.h>

typedef long long ll;
using namespace std;
const ll N = 500;
ll arr[N][N];

vector<vector<ll>> InsertQueries(int q) {
    vector<vector<ll>> res;
    for (ll i = 0; i < q; i++) {
        vector<ll> temp(4);
        for (ll j = 0; j < 4; j++) {
            cin >> temp[j];
        }
        res.push_back(temp);
    }
    return res;
}

void UpdateCell(vector<ll> v) {
    for (ll i = v[0]; i <= v[2]; i++) {
        for (ll j = v[1]; j <= v[3]; j++) {
            arr[i][j]++;
        }
    }
}

void print(ll n) {
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            cout << arr[i][j];
        }
        puts("");
    }
}

void solve() {
    ll n, q;
    cin >> n >> q;
    vector<vector<ll>> v = InsertQueries(q);

    for (auto &it: v) {
        UpdateCell(it);
    }
    print(n);
}

int main() {
    //solve();
    vector<int>v(2,3);
}
/*
3 2
1 1 2 2
0 0 1 1
 */

