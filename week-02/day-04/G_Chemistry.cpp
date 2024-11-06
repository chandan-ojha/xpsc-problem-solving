// Problem link: https://codeforces.com/problemset/problem/1883/B

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

        map<char, int> mp;

        for (int i = 0; i < n; i++)
        {
            mp[str[i]]++;
        }

        int oddCnt = 0;

        for (auto it : mp)
        {
            if (it.second % 2 != 0)
            {
                oddCnt++;
            }
        }

        if (oddCnt - 1 < 0)
        {
            oddCnt = 0;
        }
        else
        {
            oddCnt = oddCnt - 1;
        }

        if (k >= oddCnt && k <= n)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}