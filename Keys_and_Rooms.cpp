#include <bits/stdc++.h>
#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define T int T; cin >> T; while(T--)
using namespace std;
using vec = vector<int>; using mat = vector<vec>;
template<typename Q> istream& operator>>(istream& is, vector<Q>& v) { for(auto& x : v) is >> x; return is; }


signed main() {
    fastio
        vector<vector<int>> v{{1,3},{3,0,1},{2},{0}};
        set<int>s;
        vector<int>vis(v.size(),0);
        s.insert(0);
        while(!s.empty()){
            int e=*s.begin();
            s.erase(s.begin());
            vis[e]=1;

            for(int x:v[e]){
                if(!vis[x])s.insert(x);
            }
        }

        for(int i=0;i<vis.size();i++){
            if(vis[i]==0){cout<<0<<endl;return 0;}
        }
        cout<<1<<endl;
        
}