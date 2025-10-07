//https://codeforces.com/problemset/problem/1669/B

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
        map<int, int> freq;
        int ans = -1;
        for (int x : v)
        {
            freq[x]++;
            if (freq[x] == 3)
            {
                ans = x;
                break;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}