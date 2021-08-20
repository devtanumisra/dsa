#include <bits/stdc++.h>
using namespace std;

vector<int> bubble_sort(vector<int> v) {
  int t;
  for (int i = 0; i < v.size(); i++) {
    for (int j = 0; j < v.size() - i - 1; j++) {
      if(v[j] > v[j+1]) {
        t = v[j];
        v[j] = v[j+1];
        v[j+1] = t;
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
    v = bubble_sort(v);
    for(auto x :  v) {
      cout << x << " ";
    }
    return 0;
}
