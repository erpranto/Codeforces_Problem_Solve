// https://codeforces.com/problemset/problem/977/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, ops;
    cin >> n >> ops;
    while (ops--)
    {
        if (n % 10 != 0)
            n -= 1;
        else if (n % 10 == 0)
            n /= 10;
    }
    cout << n << nl;
    return 0;
}