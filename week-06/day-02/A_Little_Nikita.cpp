// Problem Link: https://codeforces.com/problemset/problem/1977/A
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
        int n, m;
        cin >> n >> m;
        if (n >= m)
        {
            int diff = n - m;

            if (diff % 2 == 0)
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}