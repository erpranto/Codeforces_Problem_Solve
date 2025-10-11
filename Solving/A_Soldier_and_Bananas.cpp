//https://codeforces.com/problemset/problem/546/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k, n, w;
    cin >> k >> n >> w;
    int total_cost = k * w * (w + 1) / 2;
    int borrow = total_cost - n;
    if (borrow < 0)
        borrow = 0;
    cout << borrow << endl;
    return 0;
}