from collections import defaultdict

class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        sdic = defaultdict(int)
        tdic = defaultdict(int)
        for char in s:
            sdic[char] += 1
        for char in t:
            tdic[char] += 1

        return sdic == tdic