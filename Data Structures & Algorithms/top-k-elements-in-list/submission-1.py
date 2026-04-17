from collections import defaultdict

class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        """
            dictionary of num: occurence, return a list of keys of k greatest values
        """

        count = {}
        for num in nums:
            count[num] = count.get(num, 0) + 1
        "{1: 3, 2: 2, 3: 1}"

        return [num for num, freq in sorted(count.items(), key=lambda x: x[1], reverse=True)[:k]]

        

        
        

        
        
        