//https://codeforces.com/problemset/problem/339/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    vector<char> v;
    for (char c : s)
    {
        if (c != '+')
            v.push_back(c);
    }
    sort(v.begin(), v.end());
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
            cout << v[i] << "\n";
        else
            cout << v[i] << "+";
    }
    return 0;
}