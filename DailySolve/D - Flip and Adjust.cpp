#include <bits/stdc++.h>
#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

void solve(int n,int s,int* f,int* b){
    vector<vector<int>> dp(n+1, vector<int>(s+1, 0));
    dp[0][0] = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= s; j++) {
            if (dp[i][j]) {
                if (j + f[i] <= s) dp[i + 1][j + f[i]] = 1;
                if (j + b[i] <= s) dp[i + 1][j + b[i]] = 1;
            }
        }
    }

    if (dp[n][s]) {
        cout << "Yes\n";
        string str(n, ' ');
        for (int i = n - 1; i >= 0; i--) {
            if (s >= f[i] && dp[i][s - f[i]]) {
                str[i] = 'H';
                s -= f[i];
            } else if (s >= b[i] && dp[i][s - b[i]]) {
                str[i] = 'T';
                s -= b[i];
            }
        }
        cout << str << "\n";
    } else {
        cout << "No\n";
    }
}

signed main() {
    fastio;
    int n, t, k = 0;
    int f[105], b[105];
    cin >> n >> t;
    for (int i = 0; i < n; i++) {
        cin >> f[i] >> b[i];
    }
    solve(n, t, f, b);
}
