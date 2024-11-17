// Problem link: https://www.codechef.com/problems/FOOTBALLTIES
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
        int x, y;
        cin >> x >> y;

        int mn = min(x, y);
        cout << mn % 3 << endl;
    }

    return 0;
}