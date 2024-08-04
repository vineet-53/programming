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
  int n  ,m ;
  cin >> n >> m ;
  vector<int> a;
  for(int i =0 ; i < m ; i ++) {
    int elem;
    cin >> elem ;
    a.push_back(elem);
  }
  sort(a.begin() , a.end());
  int start = 0 , end = n - 1;
  int mini = INT_MAX;
  while(end < m) {
    mini = min(mini , abs(a[end] - a[start]));
    start ++;
    end ++;
  }
  cout << mini << endl;
}

int main() {
  code();
  run();
  return 0;
}
