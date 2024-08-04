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
void run() {
  int n;
  cin >> n;

  vector<pair<int, int>> laptops;

  for (int i = 0; i < n; ++i) {
    int a, b;
    cin >> a >> b; // Input two integers for each line
    laptops.push_back({a , b });
  }
  sort(laptops.begin() ,  laptops.end() , comp);
  int flag =0 ;
  for(int i = 0; i < n -1; i++) {
    if(laptops[i].second > laptops[i + 1].second) {
      flag = 1;
      break;
    }
  }
  if(flag) {
    cout  << "Happy Alex" << endl;
  }
  else {
    cout  << "Poor Alex" << endl;
  }
}
int main() {
  code();
  run();
  return 0;
}
