// Problem Link: https://codeforces.com/problemset/problem/1618/C
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
        int n;
        cin >> n;
        vector<ll> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll G1 = 0, G2 = 0;

        for (int i = 0; i < n; i += 2)
        {
            G1 = __gcd(G1, a[i]);
        }

        for (int i = 1; i < n; i += 2)
        {
            G2 = __gcd(G2, a[i]);
        }

        ll ans = 0;
        bool ok = true;

        for (int i = 1; i < n; i += 2)
        {
            if (a[i] % G1 == 0)
            {
                ok = false;
            }
        }

        if (ok)
        {
            ans = G1;
        }
        else
        {
            ok = true;
            for (int i = 0; i < n; i += 2)
            {
                if (a[i] % G2 == 0)
                {
                    ok = false;
                }
            }
            if (ok)
            {
                ans = G2;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}