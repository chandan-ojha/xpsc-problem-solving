#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int opt1 = a + b;
    int opt2 = max(a + (a - 1), b + (b - 1));
    int result = max(opt1, opt2);
    cout << result << endl;
    return 0;
}