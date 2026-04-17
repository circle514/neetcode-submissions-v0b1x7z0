class Solution:
    def count_letters(self, word):
        count = {}
        for letter in word:
            count[letter] = count.setdefault(letter, 0) + 1
        return tuple(sorted(count.items()))

    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        grouped_anagrams = {}
        for word in strs:
            letter_occurrences = self.count_letters(word)
            grouped_anagrams.setdefault(letter_occurrences, []).append(word)

        return list(grouped_anagrams.values())
            
