# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteMiddle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        l=0
        curr=head
        while curr:
            l+=1
            curr=curr.next
        v= l//2
        if v==0: return head.next
        curr=head
        for _ in range(v-1):
            curr=curr.next
        prev = curr.next
        curr.next=prev.next
        prev=prev.next

        return head
        

