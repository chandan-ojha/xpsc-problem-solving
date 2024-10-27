#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int multiple = (a % c == 0) ? a : a + (c - a % c);

    if (multiple <= b)
    {
        cout << multiple << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}