#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

vector<bool> seen;
bool is_all_true()
{
    for (int i = 0; i < seen.size(); i++)
    {
        if (seen[i] == false)
        {
            return false;
        }
    }
    return true;
}

int dfs(const Graph &G, int v)
{
    if (is_all_true())
    {
        return 1;
    }
    int count = 0;
    for (auto next_v : G[v])
    {
        if (seen[next_v] == true)
        {
            continue;
        }
        seen[next_v] = true;
        count += dfs(G, next_v);
        seen[next_v] = false;
    }
    return count;
}

int main()
{
    int N, M;
    cin >> N >> M;

    Graph G(N);
    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    seen.assign(N, false);
    seen[0] = true;
    cout << dfs(G, 0) << endl;
}