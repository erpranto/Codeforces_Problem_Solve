//https://codeforces.com/problemset/problem/1676/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int mn = INT_MAX, ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mn = min(mn, v[i]);
        }
        for (int i = 0; i < n; i++)
        {
            ans += v[i] - mn;
        }
        cout << ans << "\n";
    }
    return 0;
}