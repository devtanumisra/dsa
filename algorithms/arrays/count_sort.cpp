#include <bits/stdc++.h>
#pragma optimize("Ofast")
#define endl "\n"
using namespace std;

vector<int> count_sort(vector<int> v) {
  vector<int> z(100, 0);
  for(auto a : v) {
      z[a]++;
  }
  v.clear();
  for (int i = 0; i < z.size(); ++i) {
    for (int j = 0; j < z[i]; ++j) {
      v.push_back(i);
    }
  }
  return v;
} 

int main() {
    vector<int> v;
    int n, t, input;
    cout << "Enter N : ";
    cin >> n;
    for(int i = 0; i < n; i++) {
      cout << "Enter " << i << "th Element : ";
      cin >> input;
      v.push_back(input);
    }
    v = count_sort(v);
    for(auto x :  v) {
      cout << x << " ";
    }
    return 0;
}