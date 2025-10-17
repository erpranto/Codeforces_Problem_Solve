//https://codeforces.com/contest/2162/problem/B

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
        string s;
        cin >> n >> s;
        vector<int> ans;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
                ans.push_back(i + 1);
        }
        cout << ans.size() << '\n';
        for (auto val : ans)
            cout << val << " ";
        cout << '\n';
    }
    return 0;
}