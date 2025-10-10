//https://codeforces.com/problemset/problem/141/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    int freq1[26] = {0}, freq2[26] = {0};
    for (char c : s1)
        freq1[c - 'A']++;
    for (char c : s2)
        freq1[c - 'A']++;
    for (char c : s3)
        freq2[c - 'A']++;
    bool flag = true;
    for (int i = 0; i < 26; i++)
    {
        if (freq1[i] != freq2[i])
        {
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}