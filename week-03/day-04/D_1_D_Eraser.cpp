// Problem link: https://codeforces.com/contest/1873/problem/D
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'B')
            {
                ans++;
                i += k - 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}