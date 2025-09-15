#include <bits/stdc++.h>
#define int long long
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define T     \
    int T;    \
    cin >> T; \
    while (T--)
using namespace std;

signed main()
{
    fastio T
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());

        int ans = 0;
        int prev = 0;

        for (int i = 0; i < n; i++)
        {
            if (prev >= a[i])
            {
                ans++;
                continue;
            }

            int diff = a[i] - prev;
            int remaining = n - i;
            int need = diff * remaining;

            if (k > need)
            {
                k -= need;
                ans += need + 1;
            }
            else
            {
                ans += k;
                break;
            }
            prev = a[i];
        }

        cout << ans << '\n';
    }
    return 0;
}