#include <bits/stdc++.h>
#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define T int T; cin >> T; while(T--)
using namespace std;
using vec = vector<int>; using mat = vector<vec>;
template<typename Q> istream& operator>>(istream& is, vector<Q>& v) { for(auto& x : v) is >> x; return is; }

int32_t main()
{
    fastio int m, n, k;
    cin >> m >> n >> k;
    vec r(m);
    vec s(n);

    for (int i = 0; i < m; i++)
    {
        cin >> r[i];
    }
    for (int j = 0; j < n; j++)
    {
        cin >> s[j];
    }

    sort(r.begin(), r.end());
    sort(s.begin(), s.end());

    int i = 0, j = 0, cnt = 0;

    for (; i < m;)
    {
        for (; j < n && s[j] < r[i] - k;)
            j++;
        if (abs(r[i] - s[j]) <= k)
        {
            cnt++;
            i++;
            j++;
        }
        else
            i++;
    }
    cout << cnt;
}