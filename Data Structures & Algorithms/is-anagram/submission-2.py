from collections import Counter

class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        sdic = defaultdict(int)
        for char in s:
            sdic[char] += 1

        for char in t:
            sdic[char] -= 1

        for value in sdic.values():
            if value != 0:
                return False
        return True
        
    