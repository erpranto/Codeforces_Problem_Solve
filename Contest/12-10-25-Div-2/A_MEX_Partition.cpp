#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
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

        vector<int> freq(102, 0);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (0 <= x && x <= 100)
                freq[x]++;
        }
        int ans = 0;
        while (true)
        {
            if (freq[ans] == 0)
            {
                break;
            }
            ans++;
        }
        cout << ans << nl;
    }
    return 0;
}