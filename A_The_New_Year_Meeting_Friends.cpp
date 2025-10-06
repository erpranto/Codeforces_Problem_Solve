//https://codeforces.com/problemset/problem/723/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v(3);
    cin >> v[0] >> v[1] >> v[2];
    sort(v.begin(), v.end());
    int a = v[0], b = v[1], c = v[2];
    int ans = (b - a) + (c - b);
    cout << ans << "\n";
    return 0;
}