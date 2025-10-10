//https://codeforces.com/problemset/problem/1850/B

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
        int n;
        cin >> n;
        int widx = -1;
        int maxq = -1;

        for (int i = 1; i <= n; i++)
        {
            int ai, bi;
            cin >> ai >> bi;
            if (ai <= 10 && bi > maxq)
            {
                maxq = bi;
                widx = i;
            }
        }

        cout << widx << "\n";
    }
    return 0;
}