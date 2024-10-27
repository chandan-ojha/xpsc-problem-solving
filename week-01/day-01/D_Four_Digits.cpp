#include <bits/stdc++.h>
using namespace std;
int main()
{
    string ns;
    cin >> ns;
    int nsl = ns.size();

    if (nsl == 4)
    {
        cout << ns << endl;
    }
    else
    {
        int rem = 4 - nsl;
        ns.insert(ns.begin(), rem, '0');
        cout << ns << endl;
    }

    return 0;
}