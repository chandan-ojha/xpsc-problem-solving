#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin >> str;

    vector<int> freq(26, 0);

    for (char cha : str)
    {
        freq[cha - 'a']++;
    }

    bool flag = true;
    char result;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] == 0)
        {
            flag = false;
            result = ('a' + i);
            break;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] == 0)
        {
            flag = false;
            result = ('a' + i);
            break;
        }
    }

    if (flag)
    {
        cout << "None" << endl;
    }
    else
    {
        cout << result << endl;
    }

    return 0;
}