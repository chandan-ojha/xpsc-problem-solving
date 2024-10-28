#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    ll total_sum = 0;
    int min_odd = INT_MAX;

    for (int i = 0; i < n; ++i)
    {
        total_sum += nums[i];

        if (nums[i] % 2 != 0)
        {
            min_odd = min(min_odd, nums[i]);
        }
    }

    if (total_sum % 2 == 0)
    {
        cout << total_sum << endl;
    }
    else
    {
        cout << total_sum - min_odd << endl;
    }

    return 0;
}