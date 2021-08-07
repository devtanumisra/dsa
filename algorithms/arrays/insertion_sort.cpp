#include <bits/stdc++.h>
#define pb push_back
using namespace std;

vector<int> insertion_sort(vector<int> v) {
  int t;
  for (int i = 1; i < v.size(); ++i) {
    for (int j = 0; j < i; j++) {
      if (v[j] > v[i]) {
        t = v[i];
        v.erase(v.begin() + i);
        v.insert(v.begin() + j, t);
      }
    }
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
    v = insertion_sort(v);
    for(auto x :  v) {
      cout << x << " ";
    }
    return 0;
}