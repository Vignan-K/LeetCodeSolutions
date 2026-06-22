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
    ListNode* swapNodes(ListNode* head, int k) {
        int l=0;
        ListNode* curr=new ListNode();
        curr=head;
        while (curr!=nullptr){
            curr=curr->next;
            l++;
        }
        l=l-k;
        ListNode* first=new ListNode();
        first=head;
        for (int i=0;i<k-1;i++){
            first=first->next;
        }
        curr=head;
        for (int i=0;i<l;i++){
            curr=curr->next;
        }
        std::swap(curr->val,first->val);
        return head;
    }
};
