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
        string row1, row2;
        cin >> row1 >> row2;

        bool identical = true;

        for (int i = 0; i < n; i++)
        {
            if (row1[i] == 'R' && row2[i] != 'R')
            {
                identical = false;
                break;
            }
            if ((row1[i] == 'G' || row1[i] == 'B') && (row2[i] != 'G' && row2[i] != 'B'))
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