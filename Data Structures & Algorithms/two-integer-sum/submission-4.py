class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashmap = {}
        for index, num in enumerate(nums):
            remainder = target - num
            if remainder in hashmap:
                return [hashmap[remainder], index]
            hashmap[num] = index