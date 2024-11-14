// Problem link: https://codeforces.com/problemset/problem/1840/C
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, q;
        cin >> n >> k >> q;
        vector<ll> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll ans = 0, cons = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] <= q)
            {
                cons++;

                if (i == n - 1 || a[i + 1] > q)
                {
                    if (cons >= k)
                    {
                        ll x = cons - k + 1LL;
                        ll add = (x * (x + 1LL)) / 2LL;
                        ans += add;
                    }
                    cons = 0;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}