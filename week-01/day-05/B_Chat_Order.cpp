// Problem_9 link: https://codeforces.com/problemset/problem/637/B

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<string, int> chat;

    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        chat[name] = i;
    }

    map<int, string> chat_order;

    for (auto entry : chat)
    {
        chat_order[entry.second] = entry.first;
    }

    for (auto it = chat_order.rbegin(); it != chat_order.rend(); it++)
    {
        cout << it->second << '\n';
    }

    return 0;
}