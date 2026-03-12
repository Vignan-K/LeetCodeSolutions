# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def pairSum(self, head: Optional[ListNode]) -> int:
        l=0
        curr=head
        while curr:
            l+=1
            curr=curr.next
        v=l//2
        tail=head
        for _ in range(v):
            tail=tail.next
        prev =None
        curr=tail
        while curr:
            temp=curr.next
            curr.next=prev
            prev=curr
            curr=temp
        tail=prev
        max=0
        while tail and head:
            sum=tail.val+head.val
            if sum>max: max=sum
            tail=tail.next
            head=head.next
        return max


