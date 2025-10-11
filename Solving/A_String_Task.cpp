// https://codeforces.com/problemset/problem/118/A

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
    string vowels = "aoyeuiAOYEUI";
    string result = "";

    for (char c : s)
    {
        if (vowels.find(c) == string::npos)
        {
            result += '.';
            result += tolower(c);
        }
    }

    cout << result << endl;
    return 0;
}