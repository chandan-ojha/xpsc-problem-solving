// Problem Link: https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/B
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll k;
    cin >> n >> k;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0, r = 0, ans = INT_MAX;
    ll sum = 0;

    while (r < n)
    {
        sum += a[r];
        while (sum >= k)
        {
            ans = min(ans, r - l + 1);
            sum -= a[l];
            l++;
        }
        r++;
    }

    if (ans == INT_MAX)
    {
        cout << -1 << '\n';
    }
    else
    {
        cout << ans << '\n';
    }

    return 0;
}