// Problem Link: https://codeforces.com/problemset/problem/1975/A
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
        ll n;
        cin >> n;
        ll arr[n + 1];

        for (ll i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        ll min1 = arr[1], index = n + 1;

        vector<ll> v;
        v.push_back(arr[1]);

        for (ll i = 2; i <= n; i++)
        {
            if (min1 <= arr[i])
            {
                min1 = arr[i];
                v.push_back(min1);
            }
            else
            {
                index = i;
                break;
            }
        }

        vector<ll> ans;

        for (ll i = index; i <= n; i++)
        {
            ans.push_back(arr[i]);
        }

        for (ll i = 0; i < v.size(); i++)
        {
            ans.push_back(v[i]);
        }

        if (is_sorted(ans.begin(), ans.end()))
        {
            cout << "Yes" << '\n';
        }
        else
        {
            cout << "No" << '\n';
        }
    }

    return 0;
}