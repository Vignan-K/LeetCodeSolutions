class Solution:
    def plusOne(self, di: List[int]) -> List[int]:
        l=len(di)
        m=0
        for i in range((l-1),-1,-1):
            if di[i]+1>9:
                di[i]=(di[i]+1)-10
                m+=1
                continue
            di[i]+=1
            break
        if m==l:
            di.insert(0,1)

        return di

