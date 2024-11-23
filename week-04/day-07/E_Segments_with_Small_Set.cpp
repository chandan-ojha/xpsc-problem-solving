// Problem Link: https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/E
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    int l = 0, r = 0, unique_count = 0;
    map<int, int> freq;
    ll result = 0;

    while (r < n)
    {
        if (freq[arr[r]] == 0)
        {
            unique_count++;
        }
        freq[arr[r]]++;

        while (unique_count > k)
        {
            freq[arr[l]]--;
            if (freq[arr[l]] == 0)
            {
                unique_count--;
                freq.erase(arr[l]);
            }
            l++;
        }
        result += (r - l + 1);
        r++;
    }
    cout << result << endl;

    return 0;
}