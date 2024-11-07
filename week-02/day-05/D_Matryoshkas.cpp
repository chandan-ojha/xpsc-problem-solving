// Problem link: https://codeforces.com/problemset/problem/1790/D

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, num, ans = 0, i;
        cin >> n;
        map<ll, ll> m1;

        while (n--)
        {
            cin >> num;
            m1[num]++;
        }

        vector<pair<ll, ll>> v1;

        for (auto it : m1)
        {
            v1.push_back({it.first, it.second});
        }

        ll t1 = v1[0].first, t2 = v1[0].second;
        n = v1.size();

        for (i = 1; i < n; i++)
        {
            if (v1[i].first == t1 + 1)
            {
                if (t2 > v1[i].second)
                {
                    ans += (t2 - v1[i].second);
                }
            }
            else
            {
                ans += t2;
            }
            t1 = v1[i].first;
            t2 = v1[i].second;
        }

        ans += t2;
        cout << ans << endl;
    }
    return 0;
}