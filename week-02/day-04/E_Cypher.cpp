// Problem link: https://codeforces.com/problemset/problem/1703/C

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            string str;
            cin >> str;

            for (char cha : str)
            {
                if (cha == 'D')
                {
                    arr[i]++;
                    if (arr[i] == 10)
                    {
                        arr[i] = 0;
                    }
                }
                else
                {
                    arr[i]--;
                    if (arr[i] == -1)
                    {
                        arr[i] = 9;
                    }
                }
            }
        }

        for (int x : arr)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}