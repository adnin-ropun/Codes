#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define T int T; cin >> T; while(T--)
using namespace std;
using vec = vector<int>; using mat = vector<vec>;
template<typename Q> istream& operator>>(istream& is, vector<Q>& v) { for (auto& x : v) is >> x; return is; }

int32_t main()
{
    fastio 
    int n;
    cin >> n;

    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, 1});
        v.push_back({y, -1});
    }

    sort(v.begin(), v.end(), [](auto &a, auto &b)
         { return a.first < b.first; });

    int res = 0, track = 0;
    for (int i = 0; i < v.size(); i++)
    {
        track += +v[i].second;
        res = max(res, track);
    }
    cout << res << endl;
}