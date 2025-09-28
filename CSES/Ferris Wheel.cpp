#include <bits/stdc++.h>
#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define T int T; cin >> T; while(T--)
using namespace std;
using vec = vector<int>; using mat = vector<vec>;
template<typename Q> istream& operator>>(istream& is, vector<Q>& v) { for(auto& x : v) is >> x; return is; }

int32_t main()
{
    fastio int n, l;
    cin >> n >> l;
    vec v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int i = 0, j = v.size() - 1, cnt = 0;
    while (i <= j)
    {
        if (v[i] + v[j] <= l)
        {
            i++;
            j--;
        }
        else
        {
            j--;
        }
        cnt++;
    }
    cout << cnt << endl;
}