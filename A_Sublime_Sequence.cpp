//https://codeforces.com/contest/2148/problem/A

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
        int x, n;
        cin >> x >> n;
        if (n % 2 == 0)
            cout << 0 << "\n";
        else
            cout << x << "\n";
    }
    return 0;
}