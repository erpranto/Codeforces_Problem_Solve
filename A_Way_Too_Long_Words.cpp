//https://codeforces.com/problemset/problem/71/A

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
        string s;
        cin >> s;
        if (s.size() <= 10)
            cout << s << "\n";
        else
        {
            int cnt = s.size();
            cout << s[0] << cnt - 2 << s.back() << "\n";
        }
    }
    return 0;
}