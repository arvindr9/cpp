#include <bits/stdc++.h>

using namespace std;

vector<int> adj[6];
bool visited[6];
//vector<int> distance;
queue<int> q;

void bfs(int x) {
    visited[x] = true;
    //distance[x] = 0;
    q.push(x);
    while(!q.empty()) {
        int s = q.front(); q.pop();
        cout << s << " ";
        for(auto u: adj[s]) {
            if(visited[u]) continue;
            visited[u] = true;
            //distance[u] = distance[s] + 1;
            q.push(u);
        } 
    }
}

void initialize() {
    for(int i = 0; i < 6; i++) {
        visited[i] = false;
        distance.push_back(0);
    } 
}


int main() {
    freopen("input.txt", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);

    initialize();
    adj[0].push_back(3);
    adj[3].push_back(0);
    adj[0].push_back(1);
    adj[1].push_back(0);
    adj[1].push_back(2);
    adj[2].push_back(1);
    adj[1].push_back(4);
    adj[4].push_back(1);
    adj[2].push_back(5);
    adj[5].push_back(2);
    adj[5].push_back(4);
    adj[4].push_back(5);
    bfs(0);
    
}