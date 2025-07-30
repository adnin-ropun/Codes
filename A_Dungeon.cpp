#include <bits/stdc++.h>
#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define T int T; cin >> T; while(T--)
using namespace std;
using vec = vector<int>; using mat = vector<vec>;

template<typename Q>
istream& operator>>(istream& is, vector<Q>& v) { for(auto& x : v) is >> x; return is; }

signed main() {
    fastio
        T{
            int a,b,c;cin>>a>>b>>c;

            int s=(a+b+c)%9,p=(a+b+c)/9;
            if(s==0 && a>=p && b>=p && c>=p){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
}