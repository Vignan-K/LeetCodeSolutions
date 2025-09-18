class Solution:
    def climbStairs(self, n: int) -> int:
        if n<=1:
            return 1
        a,b=1,1
        for _ in range (n-1):
            t= a+b
            a=b
            b=t

        return b
