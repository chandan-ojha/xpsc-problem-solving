// Problem Link: https://codeforces.com/problemset/problem/1421/A
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
        ll a, b;
        cin >> a >> b;
        cout << (a ^ b) << '\n';
    }

    return 0;
}