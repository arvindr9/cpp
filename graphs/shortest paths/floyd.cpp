#include <bits/stdc++.h>

using namespace std;

int INF = numeric_limits<int>::max()/2;

/*void printarr(int& arr[6][6], int& n) {
    for (int i = 1; i<=n; i++) {
        for (int j = 1; j <= n; j++) { 
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}*/

int main() {
    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    int adj[n+1][n+1] = {{0}};
    int n1, n2, w;
    while (cin >> n1 >> n2 >> w) {
        adj[n1][n2] = w;
        adj[n2][n1] = w;
    }
    int distance[n][n];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j) distance[i][j] = 0;
            else if (adj[i][j]) distance[i][j] = adj[i][j];
            else distance[i][j] = INF;
        }
    }
    //printarr(distance, n);
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i<=n; i++) {
            for (int j = 1; j <= n; j++) {
                distance[i][j] = min(distance[i][j], distance[i][k]+distance[k][j]);
            }
        }
    }

    for (int i = 1; i<=n; i++) {
        for (int j = 1; j <= n; j++) { 
            cout << distance[i][j] << " ";
        }
        cout << "\n";
    }

    
}