// Problem link: https://codeforces.com/problemset/problem/1714/B
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

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        set<int> s;
        int visited = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            s.insert(a[i]);
            visited++;

            if (visited > s.size())
            {
                break;
            }
        }

        int result = n - s.size();
        cout << result << endl;
    }

    return 0;
}