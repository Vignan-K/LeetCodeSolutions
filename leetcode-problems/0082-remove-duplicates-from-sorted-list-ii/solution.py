# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head is None : return head
        prev=None
        curr=head
        p=0
        while curr and curr.next:
            if curr.next.val!=curr.val:
                prev=curr
                curr=curr.next
            else:
                p=curr.val
                if prev is None:
                    while head and head.val==p:
                        head=head.next
                    curr=head
                    continue
                while curr and curr.val==p:
                    curr=curr.next
                prev.next=curr
        return head
