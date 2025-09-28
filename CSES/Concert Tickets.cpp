#include <bits/stdc++.h>
#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define T int T; cin >> T; while(T--)
using namespace std;
using vec = vector<int>; using mat = vector<vec>;
template<typename Q> istream& operator>>(istream& is, vector<Q>& v) { for(auto& x : v) is >> x; return is; }

int32_t main()
{
    fastio int m, n;
    cin >> m >> n;
    vec b(n);
    multiset<int> a;

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        a.insert(x);
    }
    for (int j = 0; j < n; j++)
        cin >> b[j];

    for (int i = 0; i < n; i++)
    {
        auto idx = a.upper_bound(b[i]);

        if (idx == a.begin())
        {
            cout << -1 << endl;
        }
        else
        {
            idx--;
            cout << *idx << endl;
            a.erase(idx);
        }
    }
}
