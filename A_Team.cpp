// https://codeforces.com/problemset/problem/231/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int p, v, t;
        cin >> p >> v >> t;
        if (p + v + t >= 2)
        {
            cnt++;
        }
    }
    cout << cnt << "\n";
    return 0;
}