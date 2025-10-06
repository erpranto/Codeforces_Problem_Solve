#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int l, r, diff;
        cin >> l >> r;
        long long int max_val = max(l, r);
        long long int min_val = min(l, r);

        long long int l_sum = (min_val * (min_val - 1)) / 2;
        long long int r_sum = (max_val * (max_val + 1)) / 2;

        cout << r_sum - l_sum << endl;
    }
    return 0;
}