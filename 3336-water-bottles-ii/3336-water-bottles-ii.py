class Solution:
    def maxBottlesDrunk(self, numBottles: int, numExchange: int) -> int:
        sum=numBottles
        Empty_Bottles=numBottles
        bot=0
        while Empty_Bottles>=numExchange:
              bot+=1
              Empty_Bottles=Empty_Bottles-numExchange
              numExchange+=1
              if Empty_Bottles<numExchange:
                sum+=bot
                Empty_Bottles+=bot
                bot=0

        return sum+bot