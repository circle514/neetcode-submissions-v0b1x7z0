from collections import defaultdict

class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        sdic = defaultdict(int)
        for char in s:
            sdic[char] += 1
        
        tdic = defaultdict(int)
        for char in t:
            tdic[char] += 1

        if sdic == tdic:
            return True
        else:
            return False            