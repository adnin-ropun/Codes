#include <bits/stdc++.h>
#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define T int T; cin >> T; while(T--)
using namespace std;
using vec = vector<int>; using mat = vector<vec>;
template<typename Q> istream& operator>>(istream& is, vector<Q>& v) { for(auto& x : v) is >> x; return is; }

int m, n;
vector<vector<char>> grid;
mat vis;
vector<pair<int, int>> dir = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

void dfs(int i, int j)
{
    vis[i][j] = 1;

    for (auto [dx, dy] : dir)
    {
        int nextX = i + dx;
        int nextY = j + dy;

        if (nextX >= 0 && nextX < n && nextY >= 0 && nextY < m && grid[nextX][nextY] == '.' && !vis[nextX][nextY])
        {
            dfs(nextX, nextY);
        }
    }
}

int32_t main()
{
    fastio
    cin >>n >> m;
    grid.resize(n, vector<char>(m));
    vis.assign(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    int rooms = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && grid[i][j] == '.')
            {
                dfs(i, j);
                rooms++;
            }
        }
    }
    cout << rooms << endl;
}