// https://codeforces.com/problemset/problem/490/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v;
    int one = 0, two = 0, three = 0;
    vector<int> on, tw, thre;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        if (x == 1)
        {
            one++;
            on.push_back(i);
        }
        if (x == 2)
        {
            two++;
            tw.push_back(i);
        }
        if (x == 3)
        {
            three++;
            thre.push_back(i);
        }
    }
    int w = min({one, two, three});
    cout << w << "\n";
    for (int i = 0; i < w; i++)
    {
        cout << on[i] << " " << tw[i] << " " << thre[i] << "\n";
    }
    return 0;
}