#include <bits/stdc++.h>
#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define T int T; cin >> T; while(T--)
using namespace std;
using vec = vector<int>; using mat = vector<vec>;
template<typename Q> istream& operator>>(istream& is, vector<Q>& v) { for(auto& x : v) is >> x; return is; }

int32_t main()
{
    fastio int n, t;
    cin >> n >> t;
    vector<pair<int, int>> v;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        v.push_back({x, i});
    }

    sort(v.begin(), v.end());
    bool fl = 0;
    for (int i = 0; i < n; i++)
    {
        int idx = lower_bound(v.begin(), v.end(), t - v[i].first, [](auto &a, int val)
                              { return a.first < val; }) - v.begin();

        if (v[idx].first + v[i].first == t && idx != i)
        {
            fl = 1;
            cout << v[i].second << " " << v[idx].second << endl;
            break;
        }
    }
    if (!fl)
        cout << "IMPOSSIBLE" << endl;
}