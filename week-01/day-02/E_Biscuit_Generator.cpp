#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, t;
    cin >> a >> b >> t;
    double time_limit = t + 0.5;

    int pr_count = time_limit / a;
    int total_biscuits = pr_count * b;

    cout << total_biscuits << endl;

    return 0;
}