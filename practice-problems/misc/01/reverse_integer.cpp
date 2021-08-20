#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")
#define endl "\n";
#define ONLINE_JUDGE
#define max(a, b) (a < b ? b : a)
#define min(a, b) (a > b ? b : a)
#define v vector
#define pb push_back
#define fab(i, a, b) for (int i = a; i < b; ++i)
#define PI 3.1415926535897932384626
#define long long int ll;

void solve();

int main() {
    int t;
    ios::sync_with_stdio(0);

    #ifdef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    cin >> t;
    for(int i = 0; i < t; ++i) {
        solve();
    }
    return 0;
}

void solve() {
  int n, x, y, z, a, b, c, temp;
  cin >> n;
  while(n > 0) {
    x = n % 10;
    cout << x;
    n /= 10;
  }
  cout << endl;
}