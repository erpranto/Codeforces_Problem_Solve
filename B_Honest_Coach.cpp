//https://codeforces.com/problemset/problem/1360/B

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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int ans = INT_MAX;
        for (int i = 1; i < n; ++i)
        {
            ans = min(ans, v[i] - v[i - 1]);
        }
        cout << ans << '\n';
    }
    return 0;
}