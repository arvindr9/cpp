#include <bits/stdc++.h>

using namespace std;

bool ready[10000] = {false};
int value[10000] = {0};
int first[10000] = {0};
int coins[3] = {1, 3, 4};
int INF = std::numeric_limits<int>::max()-1;


int solve(int x) {
    if (x < 0) return INF;
    if (x ==0) return 0;
    if (ready[x]) return value[x];
    int best = INF;
    for (auto c: coins){
        best = min(best, 1+solve(x-c));
    }
    value[x] = best;
    ready[x] = true;
    return best;
}
int main() {
    freopen("input.txt", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    while (cin >> N) {
        value[0] = 0;
        for (int i = 1; i<= N; i++) {
            value[i] = INF;
            for (auto c: coins) {
                if (i-c >= 0) {
                    value[i] = min(value[i], value[i-c]+1);
                    first[i] = c;
                }
            }
        }
        cout << value[N];
        while (N > 0) {
            cout << first[N] << "\n";
            N -= first[N];
        }
    }
}


