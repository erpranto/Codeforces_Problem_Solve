//https://codeforces.com/problemset/problem/69/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int sumx = 0, sumy = 0, sumz = 0;
    for (int i = 0; i < n; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        sumx += x;
        sumy += y;
        sumz += z;
    }
    if (sumx == 0 && sumy == 0 && sumz == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}