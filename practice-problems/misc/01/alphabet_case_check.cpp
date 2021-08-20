#include <bits/stdc++.h>
#include <cctype>
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

void solve() {
    char c;
    string output;
    cin >> c;
    output = isupper(c) ? "Uppercase" : "Not Uppercase";
    cout << output << endl;
}
