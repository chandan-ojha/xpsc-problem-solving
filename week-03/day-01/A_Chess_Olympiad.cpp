// Problem link: https://www.codechef.com/problems/CHOLY
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, z;
    cin >> x >> y >> z;

    double our_points = x * 1 + y * 0.5;
    double opponent_points = y * 0.5 + z * 1;
    int remaining_games = 4 - (x + y + z);
    double max_points = our_points + remaining_games * 1;

    if (max_points > opponent_points)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}