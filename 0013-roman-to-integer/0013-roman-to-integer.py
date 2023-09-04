class Solution:
    def romanToInt(self, s: str) -> int:
        
        list1=[]
        roman_numerals = {'I':1,'V':5, 'X':10, 'L':50,'C':100, 'D':500,'M':1000}
        for i, val in enumerate(s):
            list1.append(roman_numerals[val])

            if (list1) and (list1[i-1] < list1[i]):
                list1[i-1] = -list1[i-1]

        return sum(list1)

    
    

        