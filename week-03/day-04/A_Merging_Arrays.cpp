// Problem link: https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    int a[n], b[m];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int c[n + m];

    for (int i = 0; i < n; i++)
    {
        c[i] = a[i];
    }

    int i = n;

    for (int j = 0; j < m; j++)
    {
        c[i] = b[j];
        i++;
    }

    sort(c, c + n + m);

    for (int i = 0; i < n + m; i++)
    {
        cout << c[i] << " ";
    }

    return 0;
}