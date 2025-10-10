//https://codeforces.com/contest/2153/problem/A

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
        int num;
        cin >> num;
        unordered_set<int> st;
        for (int i = 0; i < num; i++)
        {
            int x;
            cin >> x;
            st.insert(x);
        }
        cout << (int)st.size() << '\n';
    }
    return 0;
}