# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head==None: return head
        p=head.val
        prev=head
        curr=head.next
        while curr!=None:
            if curr.val!=p:
                p=curr.val
                prev=curr
                curr=curr.next
            else:
                prev.next=curr.next
                curr=curr.next
        return head
