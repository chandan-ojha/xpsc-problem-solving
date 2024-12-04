// Problem Link: https://codeforces.com/problemset/problem/1985/C
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
        vector<ll> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll mx = -1e9, sum = 0;
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            mx = max(mx, arr[i]);

            if (sum - mx == mx)
            {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}