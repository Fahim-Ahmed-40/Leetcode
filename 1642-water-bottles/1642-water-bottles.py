class Solution:
    def numWaterBottles(self, numBottles: int, numExchange: int) -> int:
        sum=numBottles
        totalEmpty=numBottles
        while totalEmpty>=numExchange :
            newBottles=totalEmpty//numExchange
            extra=totalEmpty%numExchange
            sum+=newBottles
            totalEmpty=extra+newBottles
        return sum
