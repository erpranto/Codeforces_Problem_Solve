//https://codeforces.com/problemset/problem/1971/A

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
        int x, y;
        cin >> x >> y;
        cout << min(x, y) << " " << max(x, y) << "\n";
    }
    return 0;
}