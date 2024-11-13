// Problem link: https://codeforces.com/problemset/problem/1690/D
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
        string letters;
        cin >> letters;
        int cnt = 0;

        for (int i = 0; i < k; i++)
        {
            if (letters[i] == 'W')
            {
                cnt++;
            }
        }

        int ans = cnt;

        for (int i = k; i < n; i++)
        {
            if (letters[i] == 'W')
            {
                cnt++;
            }
            if (letters[i - k] == 'W')
            {
                cnt--;
            }
            ans = min(ans, cnt);
        }
        cout << ans << endl;
    }

    return 0;
}