class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False

        def map_freq(string):
            freq_map = {}
            for letter in string:
                if letter in freq_map:
                    freq_map[letter] += 1
                else: 
                    freq_map[letter] = 1
            return freq_map

        return map_freq(s) == map_freq(t)
        


