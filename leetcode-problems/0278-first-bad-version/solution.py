# The isBadVersion API is already defined for you.
# def isBadVersion(version: int) -> bool:

class Solution:
    def firstBadVersion(self, n: int) -> int:
        l=1
        t=100
        while l<n:
            if isBadVersion(l):
                break
            l+=t 
        l-=t
        while 1:
            if isBadVersion(l): return l
            l+=1
