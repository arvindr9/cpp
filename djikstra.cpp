#include <bits/stdc++.h>

using namespace std;

int INF = numeric_limits<int>::max();


int main() {
    freopen("input.txt", "r", stdin);
    bool processed[5];
    for (int i = 0; i < 5; i++) {
        processed[i] = false;
    }
    int distance[5];
    for (int i = 0; i < 5; i++) {
        distance[i] = INF;
    }
    vector<pair<int, int>> adj[5];
    int numE;
    cin >> numE;
    int fi, se, w;
    while (cin >> fi >> se >> w) {
        adj[fi].push_back({se, w});
        adj[se].push_back({fi, w});
    }
    queue<pair<int, int>> q;
    int x = 2;
    distance[x] = 0;
    q.push({0,x});
    while (!q.empty()) {
        int a = q.front().second; q.pop();
        if(processed[a]) continue;
        processed[a] = true;
        for (auto u: adj[a]) {
            int b = u.first; int w = u.second;
            //cout << "distance[a] = " << distance[a] << ", distance[b] = " << distance[b] <<", w = " << w << "\n";
            if (distance[a] + w < distance[b]) {
                distance[b] = distance[a] + w;
                q.push({distance[b], b});
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        cout << "i = " << i << ", distance = " << distance[i] << "\n";
    }
}