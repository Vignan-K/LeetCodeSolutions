class Solution:
    def isHappy(self, n: int) -> bool:
        repeat=set()
        while n!=1 and n not in repeat:
            repeat.add(n)
            s=0
            for i in str(n):
                s=s+int(i)**2
            n=s
        return n==1
