# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        l=0
        tail=head
        while tail:
            l+=1
            tail=tail.next
        v=l//2
        tail=head
        for _ in range(v):
            tail=tail.next
        prev=None
        curr=tail
        while curr:
            temp=curr.next
            curr.next=prev
            prev=curr
            curr=temp
        tail=prev
        a=0
        for _ in range(v):
            if tail.val!=head.val:
                a+=1
            tail=tail.next
            head=head.next
        return not a
