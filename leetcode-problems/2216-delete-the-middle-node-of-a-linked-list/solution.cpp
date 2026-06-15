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
    ListNode* deleteMiddle(ListNode* head) {
        int l=0;
        ListNode* temp=new ListNode();
        temp=head;
        while (temp!=nullptr){
            temp=temp->next;
            l++;
        }
        if (l<2){return nullptr;}
        int mid=0;
        if (l%2==0){
            mid=l/2;
        }else{
            mid=(l-1)/2;
        }
        ListNode* prev=new ListNode();
        temp=head;
        for (int i=0; i<(mid); i++){
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        temp->next=nullptr;
        return head;
    }
};
