class Solution:
    def fractionToDecimal(self, numerator: int, denominator: int) -> str:
         if numerator == 0:
            return "0"
         fraction=[]
         if (numerator<0) ^ (denominator<0):
            fraction.append("-")

         numerator=abs(numerator)
         denominator=abs(denominator)
         fraction.append(str(numerator//denominator))
         remainder=numerator%denominator
         if remainder==0:
            return "".join(fraction)

         fraction.append(".")
         map_dict={}
         while remainder !=0:
            if remainder in map_dict:
                fraction.insert(map_dict[remainder],"(")
                fraction.append(")")
                break
            map_dict[remainder]=len(fraction)
            remainder *=10 
            fraction.append(str(remainder//denominator))
            remainder %=denominator
         return "".join(fraction)