class Solution:
    def reverse(self, n: int) -> int:
        ns=str(n)
        if n==0 or not((-(2**31))<=n<=(2**31)):
            res=0
        elif n>0:
            if ns[len(ns)-1]=="0":
                ans=ns[::-1]
                for i in ans:
                    if i is "0":
                        ans1=ans[1:]
                    else:
                        res=int(ans1)
                        break
            res=int(ns[::-1])
        else:
            n1=-(n)
            ns1=str(n1)
            ans=ns1[::-1]
            res=-(int(ans))
        if ((-(2**31))<=res<=(2**31)):
            return res
        else:
            return 0
