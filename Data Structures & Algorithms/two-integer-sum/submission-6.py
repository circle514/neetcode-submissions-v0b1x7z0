class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        match = {}
        for i, elem in enumerate(nums):
            difference = target - elem
            if difference in match:
                return [match[difference], i]
            match[elem] = i
        