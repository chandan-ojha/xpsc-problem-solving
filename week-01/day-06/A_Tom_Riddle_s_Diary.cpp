// Problem_10 link: https://codeforces.com/contest/855/problem/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<string, int> name_occur;

    while (n--)
    {
        string name;
        cin >> name;

        if (name_occur[name] > 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

        name_occur[name]++;
    }

    return 0;
}