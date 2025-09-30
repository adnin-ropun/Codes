#include <bits/stdc++.h>
#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define T int T; cin >> T; while(T--)
using namespace std;
using vec = vector<int>; using mat = vector<vec>;
template<typename Q> istream& operator>>(istream& is, vector<Q>& v) { for(auto& x : v) is >> x; return is; }

int32_t main()
{
    fastio int n;
    cin >> n;
    vec v(n);
    cin >> v;

    vec ps(n + 1);
    ps[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        ps[i] = ps[i - 1] + v[i - 1];
    }

    int ans = LLONG_MIN;
    int min_ps = ps[0];

    for (int i = 1; i <= n; i++)
    {
        ans = max(ans, ps[i] - min_ps);
        min_ps = min(min_ps, ps[i]);
    }
    cout << ans << endl;
}