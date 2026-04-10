class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        #use a dictionary and find remainder (target - i)
        #if remainder is found in dict return [i, key]
        dic = {}

        for i, num in enumerate(nums):
            remainder = target - num
            if remainder in dic:
                return [dic[remainder], i]
            dic[num] = i