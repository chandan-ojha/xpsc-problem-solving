#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t;
    cin >> s >> t;

    int operations = 0;
    int sz = s.size();

    for (int i = 0; i < sz; i++)
    {
        if (s[i] != t[i])
        {
            operations++;
        }
    }

    cout << operations << '\n';

    return 0;
}