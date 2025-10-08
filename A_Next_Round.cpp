// https://codeforces.com/problemset/problem/158/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k, n;
    cin >> n >> k;
    vector<int> v(n);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int threshold = v[k - 1];
    for (int i = 0; i < n; i++)
    {
        if (v[i] >= threshold && v[i] > 0)
            cnt++;
    }
    cout << cnt << nl;
    return 0;
}