#include <bits/stdc++.h>
using namespace std;

vector<int> selection_sort(vector<int> v) {
  int t, t_idx;
  for (int i = 0; i < v.size(); ++i) {
    t_idx = min_element(v.begin()+i, v.end()) - v.begin();
    t = v[t_idx];
    v.erase(v.begin() + t_idx);
    v.insert(v.begin() + i, t);
  }
  return v;
}

int main() {
  vector<int> v;
  int n, input;
  cout << "Enter N : ";
  cin >> n;
  for(int i = 0; i < n; i++) {
    cout << "Enter " << i << "th Element : ";
    cin >> input;
    v.push_back(input);
  }
  v = selection_sort(v);
  for(auto x :  v) {
    cout << x << " ";
  }
  return 0;
}