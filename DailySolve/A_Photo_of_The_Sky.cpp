#include <bits/stdc++.h>
#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define T int T; cin >> T; while(T--)
using namespace std;
using vec = vector<int>; using mat = vector<vec>;
template<typename Q> istream& operator>>(istream& is, vector<Q>& v) { for(auto& x : v) is >> x; return is; }

signed main() {
    fastio
    int n; 
    cin>>n;
    vec a(2*n);cin>>a;
    
    sort(a.begin(),a.end());
    
    if (n == 1){cout << 0 << endl;return 0;}
    int d=LLONG_MAX;
    for(int i=1;i<n;i++){
        d=min(d,(a[i+n-1]-a[i]));
    }
    int e=(a[n-1]-a[0]) * (a[2*n-1]-a[n]);
    int f=(a[2*n-1]-a[0])*d;
    cout<<min(e,f)<<endl;
    return 0;
}