// Created by Ahmed Arafat on 4/16/2023.
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool hasAllOnes(vector<string> &arr) {
    int n = arr.size();
    unordered_set<bitset<8>> bitsets;
    for (int i = 0; i < n; i++) {
        bitsets.insert(bitset<8>(arr[i]));
    }
    for (int i = 0; i < n; i++) {
        bitset<8> bit(arr[i]);
        for (int j = 0; j < 8; j++) {
            bit.flip(j);
        }
        if (bitsets.count(bit) > 0) return true;
    }
    return false;
}

string ReverseBit(string str) {
    string res = "";
    for (auto &it: str) {
        if (it == '1') res += '0';
        else res += '1';
    }
    return res;
}

vector<pair<ll, ll>> solve(vector<string> &vec) {
    unordered_map<string, ll> memo;
    vector<pair<ll, ll>> res;
    for (ll i = 0; i < vec.size(); i++) {
        memo[vec[i]] = i;
    }
    for (ll i = 0; i < vec.size(); i++) {
        string RequiredToGetXor = ReverseBit(vec[i]);
        if (memo.count(RequiredToGetXor)) {
            res.emplace_back(i, memo[RequiredToGetXor]);
            memo.erase(vec[i]);
        }
    }
    return res;
}

void TestCase1(vector<string> &vec) {
    if (hasAllOnes(vec)) cout << "Exist\n";
    else cout << "Not Exist\n";
}

void TestCase2(vector<string> &vec) {
    vector<pair<ll, ll>> res = solve(vec);
    if (res.empty()) printf("Not exists");
    else
        for (auto &it: res)
            cout << it.first << " -> " << it.second << "\n";
}

int main() {
    ll t;
    std::scanf("%lld", &t);
    while (t--) {
        vector<string> vec = {"11110000", "00001111", "10101010", "01010101"};
        //TestCase1(vec);
        TestCase2(vec);
    }
}