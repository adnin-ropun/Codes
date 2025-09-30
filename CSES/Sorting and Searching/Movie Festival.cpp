#include <bits/stdc++.h>
#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define T int T; cin >> T; while(T--)
using namespace std;
using vec = vector<int>;
using mat = vector<vec>;
template<typename Q> istream& operator>>(istream& is, vector<Q>& v) {
    for (auto& x : v) is >> x;
    return is;
}

int32_t main() {
    fastio
    int n; cin >> n;

    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        int x, y; cin >> x >> y;
        v.push_back({x, y});
    }

    sort(v.begin(), v.end(), [](auto & a, auto & b) {
        return a.second < b.second;
    });

    int cnt = 1, last_time = v[0].second;
    for (int i = 1; i < v.size(); i++) {
        if (last_time <= v[i].first) {
            cnt++;
            last_time = v[i].second;
        }
    }
    cout << cnt << endl;
}