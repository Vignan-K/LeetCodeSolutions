class Solution:
    def strStr(self, hs: str, n: str) -> int:
        if n not in hs:
            return -1
        else:
            i=hs.index(n)
            return i


