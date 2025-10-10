// https://codeforces.com/problemset/problem/282/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int x = 0;
    while (n--)
    {
        string s;
        cin >> s;
        if (s == "++X")
            ++x;
        if (s == "X++")
            x++;
        if (s == "--X")
            --x;
        if (s == "X--")
            x--;
    }
    cout << x << "\n";
    return 0;
}