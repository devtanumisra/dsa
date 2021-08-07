#include <bits/stdc++.h>
#define pb push_back
using namespace std;
int main() {
    vector<int> v;
    int n, t, input;
    cout << "Enter N : ";
    cin >> n;
    for(int i = 0; i < n; i++) {
      cout << "Enter " << i << "th Element : ";
      cin >> input;
      v.pb(input);
    }
    for (int i = 0; i < v.size(); i++) {
      for (int j = 0; j < v.size() - i - 1; j++) {
        if(v[j] > v[j+1]) {
          t = v[j];
          v[j] = v[j+1];
          v[j+1] = t;
        }
      }
    }
    for(auto x :  v) {
      cout << x << " ";
    }
    return 0;
}