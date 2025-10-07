//https://codeforces.com/problemset/problem/1353/B

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
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());
        for (int i = 0; i < k; i++)
        {
            if (b[i] > a[i])
                swap(a[i], b[i]);
            else
                break;
        }
        ll sum_a = 0;
        for (int x : a)
            sum_a += x;
        cout << sum_a << "\n";
    }
    return 0;
}