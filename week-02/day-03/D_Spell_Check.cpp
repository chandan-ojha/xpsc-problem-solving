// Problem link: https://codeforces.com/problemset/problem/1722/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    string name = "Timur";
    sort(name.begin(), name.end());

    while (t--)
    {
        int n;
        string str;
        cin >> n >> str;

        if (n == 5)
        {
            sort(str.begin(), str.end());

            if (str == name)
            {
                cout << "YES" << '\n';
            }
            else
            {
                cout << "NO" << '\n';
            }
        }
        else
        {
            cout << "NO" << '\n';
        }
    }

    return 0;
}