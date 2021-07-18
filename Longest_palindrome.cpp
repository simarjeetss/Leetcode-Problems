//https://leetcode.com/problems/longest-palindrome/

#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    int longestPalindrome(string s)
    {
        unordered_map<char, int> res;
        for (char c : s)
        {
            res[c]++;
        }
        bool oddfound = false;
        int ans = 0;
        for (auto c : res)
        {
            if (c.second % 2 == 0)
            {
                ans += c.second;
            }
            else
            {
                oddfound = true;
                ans += c.second - 1;
            }
        }
        if (oddfound)
        {
            ans++;
        }
        return ans;
    }
};
int main()
{
    Solution obj1;
    cout << obj1.longestPalindrome("aabbaabbaa");
    return 0;
}