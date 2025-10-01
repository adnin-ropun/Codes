#include <bits/stdc++.h>
#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define T int T; cin >> T; while(T--)
using namespace std;
using vec = vector<int>; using mat = vector<vec>;
template<typename Q> istream& operator>>(istream& is, vector<Q>& v) { for(auto& x : v) is >> x; return is; }

vec v;

long long f(int val)
{
    long long sum = 0;
    for (int x : v)
        sum += abs(x - val);
    return sum;
}

int32_t main()
{
    fastio;
    int n;
    cin >> n;
    v.resize(n);
    cin >> v;

    int l = *min_element(v.begin(), v.end());
    int r = *max_element(v.begin(), v.end());

    long long ans = LLONG_MAX;

    while (r - l > 3)
    {
        int m1 = l + (r - l) / 3;
        int m2 = r - (r - l) / 3;

        if (f(m1) < f(m2))
            r = m2;
        else
            l = m1;
    }

    for (int x = l; x <= r; x++)
        ans = min(ans, f(x));

    cout << ans << endl;
}
