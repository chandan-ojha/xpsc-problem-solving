// Problem Link: https://www.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int longestKSubstr(string &s, int k)
    {
        int n = s.size(), l = 0, r = 0, ans = -1;
        map<char, int> cnt;

        while (r < n)
        {
            cnt[s[r]]++;
            if (cnt.size() == k)
            {
                ans = max(ans, r - l + 1);
            }
            else
            {
                while (cnt.size() > k && l <= r)
                {
                    cnt[s[l]]--;
                    if (cnt[s[l]] == 0)
                    {
                        cnt.erase(s[l]);
                    }
                    l++;
                }
            }
            r++;
        }
        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;

        cout << "~"
             << "\n";
    }
}