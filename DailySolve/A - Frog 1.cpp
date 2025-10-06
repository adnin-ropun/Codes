#include <bits/stdc++.h>
#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define T int T; cin >> T; while(T--)
using namespace std;
using vec = vector<int>; using mat = vector<vec>;
template<typename Q> istream& operator>>(istream& is, vector<Q>& v) { for(auto& x : v) is >> x; return is; }
template<class Z> inline bool chmin(Z& a,Z b){
    if(a>b){
        a = b;
        return true;
    }
    return false;
}

signed main() {
    fastio
    int n;
    cin >> n;
    int height[100010];
    for (int i = 0; i < n; i++){
        cin >> height[i];
    }

    const long long INF = 1ll << 60;
    long long dp[100010];

    for (int i = 0; i < 100010; i++)
        dp[i] = INF;
    dp[0] = 0;

    for (int i = 0; i < n; i++){
        if(i+1 < n)
            chmin(dp[i + 1], dp[i] + abs(height[i + 1] - height[i]));
        if(i+2 < n)
            chmin(dp[i + 2], dp[i] + abs(height[i + 2] - height[i]));
    }
    cout << dp[n - 1];
}