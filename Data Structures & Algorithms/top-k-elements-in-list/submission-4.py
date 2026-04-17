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

        buckets = defaultdict(list)

        for num, freq in count.items():
            buckets[freq].append(num)

        res = []
        for freq in range(len(nums), 0, -1):
            for num in buckets[freq]:
                res.append(num)
                if len(res) == k:
                    return res

        

        
        

        
        
        