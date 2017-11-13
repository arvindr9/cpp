#include <bits/stdc++.h>

using namespace std;

void dfs(int u, int rainbowDown[], vector<pair<int,int>> adj[]) {
    for(auto v: adj[u]) {
        if(!rainbowDown[v.first]) {
            rainbowDown[u] = 0;
            break;
        }
        dfs(v, rainbowDown, *adj);
        for(auto w: v.first) {
            if(v.second == w.second) {
                rainbowDown[u] = 0;
                break;
            }
            rainbowDown[u] = 0;
        } 
    }
    rainbowDown[u] = 1;
}

int main() {
    freopen("input.txt", "r", stdin);
    int N;
    cin >> N;
    int a, b, c;
    vector<pair<int, int>> adj[N+1];
    while (cin >> a >> b >> c) {
        adj[a].push_back(make_pair(b, c));
        adj[b].push_back(make_pair(a, c));
    }
    int rainbowDown[N+1] = {0};
    int rainbowUp[N+1] = {0};
    for(int i = 1; i <= N; i++) {
        int count = 0;
        for (auto x: adj[i]) {
            count++;
        }
        if(count == 1) rainbowDown[i] = 1;
    }
    int root = 1;
    dfs(0, rainbowDown, adj)
    
}