#include <bits/stdc++.h>
#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define T int T; cin >> T; while(T--)
using namespace std;
using vec = vector<int>; using mat = vector<vec>;
template<typename Q> istream& operator>>(istream& is, vector<Q>& v) { for(auto& x : v) is >> x; return is; }

const int N = 1e5 + 7;
vec G[N];
vec vis(N,0);
vec components;

void dfs(int v){
    vis[v] = 1;
    for(auto neighbor:G[v]){
        if(!vis[neighbor]){
            dfs(neighbor);
        }
    }
}

int findingComponent(int n){
    int cnt = 0;
    for (int i = 1; i <= n; i++){
        if(!vis[i]){
            components.push_back(i);
            cnt++;
            dfs(i);
        }
    }
    return cnt;
}

int32_t main() {
    fastio int n, m;
    cin >> n >> m;

    while(m--){
        int u, v;
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    int cnt = findingComponent(n);
    cout << cnt - 1 << endl;

    for(int i = 0; i + 1 < cnt; i++){
        cout << components[i] << " " << components[i+1] << endl;
    }
}