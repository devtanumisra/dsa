#include <bits/stdc++.h>
using namespace std;

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


int max(int a, int b, int c) {
    int max_num = a > b ? a : b;
    max_num = max_num > c ? max_num : c;
    return max_num;
}

void solve() {
    int x, y, z;
    cin >> x >> y >> z;
    cout << max(x, y, z) << endl;
}
