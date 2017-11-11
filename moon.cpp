#include <bits/stdc++.h>

using namespace std;



int dfs(int i, int* visited[], vector<int>& adj[], int& count) {
    if(visited[i]) return;
    visited[i] = 1;
    for (int u: adj[i]) {
        if(visited[u]) continue;
        dfs
    }
    return count;

}

int main {
    freopen("input.txt", "r", stdin;
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, P;
    cin >> N >> P;
    vector<int> adj[N];
    int visited[N] = {0};
    int fst, sec;
    while (cin >> fst >> sec) {
        adj[fst].push_back(sec);
        adj[sec].push_back(fst);
    }

    stack<int> cntStack;

    for (int i = 0; i < N; i++ ) {
        int count = 0;
        if(visited[i]) continue;
        count = dfs(i, &visited, adj, count);
        cntStack.push(count);
    }
    
    


}