// Problem link: https://codeforces.com/problemset/problem/1744/C
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
        char ch;
        string str;
        cin >> ch >> str;
        str += str;

        bool flag = false;
        int cnt = 0, res = 0;

        if (ch == 'g')
        {
            cout << 0 << endl;
            continue;
        }

        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == 'g')
            {
                res = max(res, cnt);
                flag = false;
            }

            if (str[i] == ch && flag == false)
            {
                flag = true;
                cnt = 0;
            }

            if (flag)
            {
                cnt++;
            }
        }
        cout << res << endl;
    }

    return 0;
}