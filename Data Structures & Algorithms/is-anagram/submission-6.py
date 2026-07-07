class Solution:
    def isAnagram(self, s: str, t: str) -> bool:

        def map_freq(string):
            freq_map = {}
            for letter in string:
                if letter in freq_map.keys():
                    freq_map[letter] += 1
                else: 
                    freq_map[letter] = 1
            return freq_map

        return map_freq(s) == map_freq(t)
        


