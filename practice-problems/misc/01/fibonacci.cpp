#include <bits/stdc++.h>
using namespace std;

#define endl "\n";
#define ONLINE_JUDGE

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

void fibonacci(int x) {
   int a = 0, b = 1, temp;
   for(int i = 0; i < x; ++i) {
       cout << a + b << " ";
       temp = b;
       b = a + b;
       a = temp;
   }
}

void solve() {
    int x;
    cin >> x;
    cout << 0 << " " << 1 << " ";
    fibonacci(x-2);
    cout << endl;
}
