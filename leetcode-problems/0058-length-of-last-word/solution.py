class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        s1=list(s.split(" "))
        for i in range((len(s1)-1),-1,-1):
            if len(s1[i])==0:
                s1.remove(s1[i])
        return len(s1[len(s1)-1])
