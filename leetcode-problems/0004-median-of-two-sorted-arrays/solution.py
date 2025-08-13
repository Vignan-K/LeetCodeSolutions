class Solution:
    def findMedianSortedArrays(self, a: List[int], b: List[int]):
        ans=[]
        i=j=0
        while i<len(a) and j<len(b):
            if a[i]<b[j]:
                ans.append(a[i])
                i+=1
            elif a[i]>b[j]:
                ans.append(b[j])
                j+=1
            elif a[i]==b[j]:
                ans.append(a[i])
                ans.append(b[j])
                i+=1
                j+=1
        ans.extend(a[i:])
        ans.extend(b[j:])
        l=len(ans)
        if l%2!=0:
            return ans[(l)//2]
        else:
            return (ans[(l//2)-1]+ans[l//2])/2

