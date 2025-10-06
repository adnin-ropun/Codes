#include <bits/stdc++.h>
#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define T int T; cin >> T; while(T--)
using namespace std;
using vec = vector<int>; using mat = vector<vec>;
template<typename Q> istream& operator>>(istream& is, vector<Q>& v) { for(auto& x : v) is >> x; return is; }

#define v vector
#define mp map
signed main() {
    fastio
    // 1d
        v<int> a(5,0);
        for(int i=0;i<5;i++) cin>>a[i];
        cout<<a[3]<<endl;

    // 2d
        v<v<int>> b(3,v<int>(3,0));
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++) cin>>b[i][j];
        }
        cout<<b[1][2]<<endl;

    // 1-1
        mp<int,int> c;
        for(int i=0;i<5;i++){
            cin>>c[i];
        }
        cout<<c[3]<<endl;

    // 1-2
        mp<int,pair<int,int>> d;

        for(int i=0;i<5;i++){
            int a,b;cin>>a>>b;
            d[i]={a,b};
        }

        for(int i=0;i<5;i++){
            cout<<d[i].first<<" "<<d[i].second<<endl;
        }

    // 2-1
        mp<pair<int,int>,int> e;

        for(int i=0;i<5;i++){
            int x,y;cin>>x>>y;
            cin>>e[{x,y}];
        }

        cout<<e[{1,2}]<<endl;

    // 2-2
        mp<pair<int,int>,pair<int,int>> f;

        for(int i=0;i<5;i++){
            int x,y,a,b;cin>>x>>y>>a>>b;
            f[{x,y}]={a,b};
        }
    // 2-3 using tuple
        mp<pair<int,int>,tuple<int,int,int>> g;
        
        for(int i=0;i<5;i++){
            int x,y,a,b,c; cin>>x>>y>>a>>b>>c;
            g[{x,y}] = {a,b,c};
        }

    // 2-many using vector
        mp<pair<int,int>,v<int>,greater<pair<int,int>>> h;
        
        for(int i=0;i<5;i++){
            int x,y,sz; cin>>x>>y>>sz;
            h[{x,y}].resize(sz);
            for(int j=0;j<sz;j++) cin>>h[{x,y}][j];
        }

        for(int i=0;i<5;i++){
            int x,y;cin>>x>>y;
            for(auto e:h[{x,y}]) cout<<e<<" ";
            cout<<endl;
        }

    // 1-many
        mp<int,v<int>> m;

        for(int i=0;i<5;i++){
            int sz;cin>>sz;
            m[i].resize(sz);
            for(int j=0;j<sz;j++) cin>>m[i][j];
        }

    // many-many
        mp<v<int>,v<int>> xz;

        for(int i=0;i<5;i++){
            int key_sz, val_sz;
            cin >> key_sz;
            v<int> key(key_sz);
            for(int j=0;j<key_sz;j++) cin>>key[j];
            
            cin >> val_sz;
            v<int> val(val_sz);
            for(int j=0;j<val_sz;j++) cin>>val[j];
            
            xz[key] = val;
        }

    // set only keeps key in asc,unique

    // 1D set (unique values)
        set<int> s1;
        for(int i=0;i<5;i++){
            int x; cin>>x;
            s1.insert(x);  // or s1.emplace(x);
        }
        
    // 2D set (unique pairs)
        set<pair<int,int>> s2;
        for(int i=0;i<5;i++){
            int x,y; cin>>x>>y;
            s2.insert({x,y});
        } 
    // no direct access
        set<int> s1 = {1, 3, 5, 7, 9};
        auto it = s1.lower_bound(5);
        if(it != s1.end() && *it == 5) {
        cout << "5 exists at position: " <<distance(s1.begin(), it)<< endl;
    }
}