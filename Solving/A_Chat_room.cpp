//https://codeforces.com/problemset/problem/58/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    string target = "hello";
    int j = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == target[j])
        {
            j++;
        }
        if (j == target.size())
        {
            break;
        }
    }

    if (j == target.size())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}