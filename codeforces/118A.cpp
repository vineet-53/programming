/*
    @author : vineet singh
*/
#include <bits/stdc++.h>
#include <iostream>

#define ll long long

using namespace std;

void code() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
}

bool comp(pair<int, int> &a, pair<int, int> &b) { return a.first < b.first; }
bool isVowel(char ch) {
  if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
      ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'y' || ch == 'Y') {
    return true;
  }
  return false;
}

void run() {
  string s;
  cin >> s;
  string s1;
  for (auto ch : s) {
    if (ch >= 'A' && ch <= 'Z') {
      if (!isVowel(ch)) {
        s1 += '.';
        s1 += ch + 32;
      }
    } else {
      if (!isVowel(ch)) {
        s1 += '.';
        s1 += ch;
      }
    }
  }
  cout << s1 << endl;
}

int main() {
  code();
  run();
  return 0;
}
