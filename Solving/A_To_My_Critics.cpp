//https://codeforces.com/problemset/problem/1850/A

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
        vector<int> v(3);
        cin >> v[0] >> v[1] >> v[2];
        sort(v.begin(), v.end());
        if (v[1] + v[2] >= 10)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}