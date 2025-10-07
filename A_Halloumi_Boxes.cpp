//https://codeforces.com/problemset/problem/1903/A

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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> sorted = v;
        sort(sorted.begin(), sorted.end());
        if (k == 1)
        {
            if (v == sorted)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}