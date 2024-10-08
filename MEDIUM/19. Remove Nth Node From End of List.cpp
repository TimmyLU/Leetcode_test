/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *virtualnode = new ListNode(0);
        virtualnode->next = head;
        ListNode *left = virtualnode;
        ListNode *right = virtualnode;

        for(int i = 0;i <= n;i++){
            right = right->next;
        }
        while(right != nullptr){
            left = left->next;
            right = right->next;
        }
        left->next = left->next->next;
        return virtualnode->next;
    }
};