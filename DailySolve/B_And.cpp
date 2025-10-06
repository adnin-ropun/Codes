#include <bits/stdc++.h>
#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define T int T; cin >> T; while(T--)
using namespace std;
using vec = vector<int>; using mat = vector<vec>;
template<typename Q> istream& operator>>(istream& is, vector<Q>& v) { for(auto& x : v) is >> x; return is; }


signed main() {
    fastio
        int n,x;cin>>n>>x;
        vec v(n);cin>>v;
        set<int> s(v.begin(),v.end());
        set<int> t;

        if(s.size()<n) {cout<<0<<endl; return 0;}

        for(int e:v){
            int r=e&x;
            if(r!=e && s.count(r)) {cout<<1<<endl; return 0;}
        }
        for(int e:v){
            int r=e&x;
            if(r!=e && t.count(r)){ cout<<2<<endl; return 0;}
            t.insert(r);
        }

        cout<<-1<<endl;
        return 0;
}