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
    vec V(n);

    for (int i = 0; i < n; i++)
    {
        cin >> V[i];
    }

    sort(V.begin(), V.end());

    int cnt = 1;

    for (int i = 1; i < n; i++)
    {
        if (V[i] != V[i - 1])
            cnt++;
    }

    cout << cnt;
}