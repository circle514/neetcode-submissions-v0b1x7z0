class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        for i in range(len(nums)):
            for o in range(i + 1, len(nums)):
                if (nums[i] == nums[o]):
                    return True
        return False