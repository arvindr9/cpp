#include <bits/stdc++.h>

using namespace std;



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    int numWeights;
    cin >> numWeights;
    int weights[numWeights];
    for (int i = 0; i < numWeights; i++) {
        cin >> weights[i];
    }
    int maxSum = 0;
    for (auto i: weights) {
        maxSum += i;
    }
    bool possible[maxSum] = {false};
    possible[0] = true;
    cout << "1\n";
    for (int k = 1; k <= numWeights; k++) {
        cout << "2\n";
        for (int i = maxSum; i>=0; i--) {
            if (possible[i]) {
                possible[i+weights[k]] = true;
            }
        }
        cout << "3\n";
    }
    /*for (bool i: possible) {
        if(i) cout << "1 ";
        else cout << "0 ";
    }*/
    

    


}