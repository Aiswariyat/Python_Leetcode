class Solution(object):
    def twoSum(self, nums, target):
        sum1=0
        for i in range(0,len(nums)):
            for j in range(i+1,len(nums)):
                sum1=nums[i]+nums[j]
                if sum1==target:
                    return i, j;

        