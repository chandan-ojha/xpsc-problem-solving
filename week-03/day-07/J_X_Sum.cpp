// Problem link: https://codeforces.com/problemset/problem/1676/D
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int a[222][222];
ll call(int x, int y, int n, int m)
{
    ll res = 0;
    int index = 0;

    while (x - index > -1 && y - index > -1)
    {
        res += a[x - index][y - index];
        index++;
    }

    index = 0;

    while (x - index > -1 && y + index < m)
    {
        res += a[x - index][y + index];
        index++;
    }

    index = 0;

    while (x + index < n && y + index < m)
    {
        res += a[x + index][y + index];
        index++;
    }

    index = 0;

    while (x + index < n && y - index > -1)
    {
        res += a[x + index][y - index];
        index++;
    }

    return res - 3 * (a[x][y]);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i <= n - 1; i++)
        {
            for (int j = 0; j <= m - 1; j++)
            {
                cin >> a[i][j];
            }
        }

        ll ans = 0;

        for (int i = 0; i <= n - 1; i++)
        {
            for (int j = 0; j <= m - 1; j++)
            {
                ans = max(ans, call(i, j, n, m));
            }
        }
        cout << ans << endl;
    }

    return 0;
}