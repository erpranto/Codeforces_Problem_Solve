#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        int k, x;
        cin >> k >> x;
        while (k--) {
            if ((x - 1) % 3 == 0) {
                int cand = (x - 1) / 3;
                if (cand % 2 == 1) {
                    x = cand;
                    continue;
                }
            }
            x = x * 2;
        }
        cout << x << "\n";
    }
    return 0;
}
