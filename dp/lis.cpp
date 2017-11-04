#include <bits/stdc++.h>

using namespace std;



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    int length[10000] = {0};
    for (int i = 0; i < n; i++) {
        length[i] = 1;
        for (int j = 0; j < i; j++) {
            if(array[j]<array[i]) {
                length[i] = max(length[i], 1+ length[j]);
            }
        }
        //cout << "i: " << i << ", length[i]: " << length[i] << "\n";
    }
    cout << length[n-1];
}