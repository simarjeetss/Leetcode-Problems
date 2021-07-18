// https://leetcode.com/problems/merge-two-sorted-lists/
#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
public:
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution
{
public:
    ListNode *mergeSortedList(ListNode *l1, ListNode *l2)
    {
        ListNode *ans = new ListNode(-1);
        ListNode *ptr1 = l1;
        ListNode *ptr2 = l2;
        ListNode *ptr3 = ans;

        while (ptr1 != NULL and ptr2 != NULL)
        {
            if (ptr1->val < ptr2->val)
            {
                ptr3->next = ptr1;
                ptr1 = ptr1->next;
                ptr3 = ptr3->next;
            }
            else
            {
                ptr3->next = ptr2;
                ptr2 = ptr2->next;
                ptr3 = ptr3->next;
            }
        }
        while (ptr1 != NULL)
        {
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
            ptr3 = ptr3->next;
        }
        while (ptr2 != NULL)
        {
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
            ptr3 = ptr3->next;
        }
        return ans->next;
    }
};
int main()
{
    Solution obj1;
    cout<<obj1.mergeSortedList((1,2,3),(1,2,4));
    return 0;
}