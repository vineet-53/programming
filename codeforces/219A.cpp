/*
    @author : vineet singh
*/
#include <bits/stdc++.h>
#include <iostream>

#define ll long long

using namespace std;

void init_code() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
}

bool comp(pair<int, int> &a, pair<int, int> &b) { return a.first < b.first; }
string make(char ch , int times) {
  string ans = "";
  while(times--) {
    ans += ch;
  }
  return ans;
}
string func(string s, int k) {
  if (k == 1) {
    return s;
  }
  map<char, int> mp;
  for (auto ch : s) {
    mp[ch]++;
  }
  for(auto it : mp) {
    if(it.second % k != 0) {
      return "";
    }
  }
  string ans = "";
  for(auto it : mp) {
    int times = it.second / k;
    char ch = it.first;
    ans += make(ch , times);
  }
  string temp = ans;
  while(--k) {
    ans += temp;
  }
  return ans;
}
int main() {
  init_code();
  string s;
  int k;
  cin >> k;
  cin >> s;
  string ans = func(s, k);
  if (ans.size()) {
    cout << ans << endl;
  } else {
    cout << -1 << endl;
  }
  return 0;
}
