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
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  int index = a[n - 1] + 1;
  for(int i = 1; i <= n ; i++)  {
    if(a[i - 1] != i) {
      index = i;
      break;
    }
  }
  cout << index << endl;
}
int main() {
  code();
  run();
  return 0;
}
