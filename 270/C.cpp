//木のxからyまでの道のりを表示

#include <iostream>
#include <vector>
using namespace std;
using Graph = vector<vector<int>>;

// 深さ優先探索
vector<bool> seen;
vector<int> deque;
vector<int> ans;
void dfs(const Graph &G, int s, int t)
{
    seen[s] = true; // s を訪問済にする
    deque.push_back(s);

    if (s == t)
    {
        ans = deque;
        return;
    }

    // s から行ける各頂点 next_s について
    for (auto next_s : G[s])
    {

        if (seen[next_s])
            continue;      // next_s が探索済だったらスルー
        dfs(G, next_s, t); // 再帰的に探索
        deque.pop_back();
    }
}

int main()
{
    // 頂点数と辺数、s と t
    int N, x, y;
    cin >> N >> x >> y;
    x--;
    y--;
    // グラフ入力受取

    Graph G(N);
    for (int i = 0; i < (N - 1); ++i)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    // 頂点 s をスタートとした探索
    seen.assign(N, false); // 全頂点を「未訪問」に初期化
    dfs(G, x, y);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] + 1 << " ";
    }
}