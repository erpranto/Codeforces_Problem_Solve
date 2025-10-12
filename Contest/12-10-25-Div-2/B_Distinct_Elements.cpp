#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> b(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> b[i];
        }
        vector<int> a(n + 1);
        vector<int> last_pos(n + 2, 0);
        int next_val = 1;
        
        for (int i = 1; i <= n; i++) {
            int pos;
            if (i == 1) {
                pos = 0;
            } else {
                long long k = b[i] - b[i - 1] - 1;
                pos = (i - 1) - (int)k;
            }
            
            if (pos <= 0) {
                a[i] = next_val++;
                last_pos[a[i]] = i;
            } else {
                int val = a[pos];
                a[i] = val;
                last_pos[val] = i;
            }
            
            if (next_val > n) next_val = 1;
        }
        
        for (int i = 1; i <= n; i++) {
            if (i > 1) cout << " ";
            cout << a[i];
        }
        cout << "\n";
    }
    return 0;
}
