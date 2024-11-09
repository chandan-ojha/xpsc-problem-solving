// Problem link: https://codeforces.com/problemset/problem/1790/D

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
        int n;
        cin >> n;
        int arr[n + 5];
        map<int, int> mp;

        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }

        sort(arr + 1, arr + n + 1);
        int ans = 0;

        for (int i = 1; i <= n; i++)
        {
            int val = arr[i];
            if (mp[arr[i]] != 0)
            {
                ans++;
                while (mp[val] > 0)
                {
                    mp[val]--;
                    val++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}