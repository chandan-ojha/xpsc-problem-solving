// Problem link: https://www.codechef.com/problems/MNR
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
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        if (n <= 3)
        {
            cout << 0 << "\n";
            continue;
        }

        sort(a.begin(), a.end());

        int minRange = min({
            a[n - 1] - a[2],
            a[n - 2] - a[1],
            a[n - 3] - a[0],
        });

        cout << minRange << "\n";
    }

    return 0;
}