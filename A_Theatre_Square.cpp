//https://codeforces.com/problemset/problem/1/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m, a;
    cin >> n >> m >> a;
    ll fn = (n + a - 1) / a;
    ll fm = (m + a - 1) / a;
    cout << fn * fm << nl;
    return 0;
}