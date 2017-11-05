#include <bits/stdc++.h>

using namespace std;

vector<int> adj[5];
bool visited[5];

void dfs(int s) {
    //cout << "hi";
    if(visited[s]) return;
    visited[s] = true;
    cout << s << " ";
    for (auto i: adj[s]) {
        dfs(i);
    }
}

void initialize() {
    for(int i = 0;i < 5;++i)
     visited[i] = false;
}

int main() {
    freopen("input.txt", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    initialize();
    adj[0].push_back(1);
    adj[1].push_back(0);
    adj[0].push_back(3);
    adj[3].push_back(0);
    adj[1].push_back(4);
    adj[4].push_back(1);
    adj[1].push_back(2);
    adj[2].push_back(1);
    adj[2].push_back(4);
    adj[4].push_back(2);
    dfs(0);
}