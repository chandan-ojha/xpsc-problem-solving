// Problem link: https://codeforces.com/problemset/problem/1843/B
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
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll sum = 0;
        int neg = 0, step = 0;

        for (int i = 0; i < n; i++)
        {
            sum += abs(arr[i]);

            if (arr[i] < 0)
            {
                if (neg == 0)
                {
                    neg = 1;
                    step++;
                }
            }
            else if (arr[i] > 0)
            {
                neg = 0;
            }
        }
        cout << sum << " " << step << endl;
    }

    return 0;
}