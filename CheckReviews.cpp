// Created by ahmed on 3/16/2023.
// Ahmed Mohamed Yousry
// 202101234
#include <bits/stdc++.h>
typedef long long ll;
using namespace  std;

/*
2 2
i like you i love you
i like you
like
love

 ['i like you i love you']
 [ 'like' , 'love']
 */
unordered_map<string, ll> GetHashGoodWords(vector<string> &v1) {
    unordered_map<string, ll> temp;
    for (auto &it: v1) temp[it]++;
    return temp;
}

vector<string> GetWordsOfAReview(string str) {
    str += ' ';
    vector<string> res;
    string temp = "";
    for(ll i = 0; i < str.size(); i++) {
        if (str[i] == ' ') {
            if (temp.size()) {
                res.push_back(temp);
                temp = "";
            }
        } else temp += str[i];
    }
    return res;
}

void solve(vector<string> &v_reviews, vector<string> &v_good_words) {
    unordered_map<string, ll> good_words = GetHashGoodWords(v_good_words);
    priority_queue<pair<ll, ll>> res;
    for (ll i = 0; i < v_reviews.size(); i++) {
        ll cnt = 0;
        vector<string> wordsOfReview = GetWordsOfAReview(v_reviews[i]);
        for (auto &it: wordsOfReview) {
            if (good_words[it]) cnt++;
        }
        res.emplace(cnt, i * -1);
    }
    while (res.size()) {
        cout << res.top().first << "->" << res.top().second * -1 << "\n";
        res.pop();
    }
}

int main() {
    ll review_num, good_word_num;
    cin >> review_num >> good_word_num;
    vector<string> v_reviews = {"i love ahmed i like arafat", "i love ahmed"};
    vector<string> v_good_words = {"love", "like"};
    //for (ll i = 0; i < review_num; i++) getline(cin, v_reviews[i]);
    //for (ll i = 0; i < good_word_num; i++) getline(cin, v_good_words[i]);
    solve(v_reviews, v_good_words);
}

