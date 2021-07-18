// https://leetcode.com/problems/single-number/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int singleNumber(vector<int> nums)
    {
        int n = nums.size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans = ans ^ nums[i];
        }
        return ans;
    }
};
int main()
{
    Solution myobj;
    cout << myobj.singleNumber({1, 2, 3, 3});
    return 0;
}
//As we know,
//a XOR 0 = a
//a XOR a = 0
//a XOR b XOR a = b
//and that's the logic to get the unique number.  #logic