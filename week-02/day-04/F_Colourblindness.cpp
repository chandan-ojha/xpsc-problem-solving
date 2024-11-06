// Problem Link: https://codeforces.com/problemset/problem/1722/B

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
        string str1, str2;
        cin >> str1 >> str2;

        bool identical = true;

        for (int i = 0; i < n; i++)
        {
            if (str1[i] == 'R' && str2[i] != 'R')
            {
                identical = false;
                break;
            }
            if ((str1[i] == 'G' || str1[i] == 'B') && (str2[i] != 'G' && str2[i] != 'B'))
            {
                identical = false;
                break;
            }
        }

        if (identical)
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