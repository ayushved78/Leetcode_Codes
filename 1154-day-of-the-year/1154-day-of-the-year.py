class Solution:
    def dayOfYear(self, date: str) -> int:
        y,m,d = map(int, date.split('-'))
        y,m,d = map(int, date.split('-'))
#         check for leap year and check if the month is Feb then add a date in case of leap year
        if (y%400==0 or (y%100!=0 and y%4==0)) and m>2: d+=1
        mnt = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
        for i in range(1, m):
            d+=mnt[i-1]
        return d