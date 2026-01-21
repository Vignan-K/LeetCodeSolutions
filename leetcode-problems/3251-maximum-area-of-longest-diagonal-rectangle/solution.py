import math
from typing import List
class Solution:
    def areaOfMaxDiagonal(self, di: List[List[int]]) -> int:
        max=0
        area=0
        for l,b in di:
            dia=math.sqrt(l**2+b**2)
            if dia>max:
                max=dia
                area=l*b
            elif dia==max:
                if area<l*b:
                    area=l*b
        return area


        
