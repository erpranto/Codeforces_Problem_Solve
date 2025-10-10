//https://codeforces.com/problemset/problem/266/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, answer = 0;
    string s;
    cin >> n >> s;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            answer++;
        }
    }
    cout << answer << endl;
    return 0;
}