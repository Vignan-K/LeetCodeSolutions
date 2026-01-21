class Solution:
    def minDeletionSize(self, strs: List[str]) -> int:
        ans=0
        for i in range(len(strs[0])):
            t=[]
            for j in range(len(strs)):
                t.append(strs[j][i])
            if list(t)!=sorted(t):
                ans+=1
        return ans

