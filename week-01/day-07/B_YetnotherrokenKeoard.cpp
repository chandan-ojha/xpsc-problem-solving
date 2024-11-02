// Problem_6 link: https://codeforces.com/problemset/problem/1907/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int sz = str.size() - 1;
        int lower_let = 0, upper_let = 0;
        deque<char> result;

        for (int i = sz; i >= 0; i--)
        {
            if (str[i] == 'B')
            {
                upper_let++;
                continue;
            }
            if (str[i] == 'b')
            {
                lower_let++;
                continue;
            }

            if (lower_let && str[i] >= 'a' && str[i] <= 'z')
            {
                lower_let--;
                continue;
            }
            if (upper_let && str[i] >= 'A' && str[i] <= 'Z')
            {
                upper_let--;
                continue;
            }
            result.push_front(str[i]);
        }

        for (auto it : result)
        {
            cout << it;
        }
        cout << endl;
    }
    return 0;
}