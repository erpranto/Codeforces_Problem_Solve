//https://codeforces.com/problemset/problem/432/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, mem = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x + k <= 5)
            mem++;
    }
    cout << mem / 3 << "\n";
    return 0;
}