class Solution:
    def count_letters(self, word):
        """
            Returns a tuple of letter: occurrences that is sorted lexicographically
        """
        count = {}
        for letter in word:
            count[letter] = count.setdefault(letter, 0) + 1
        return tuple(sorted(count.items()))

    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        """
            make a dict of grouped_anagrams, key is letter_occurence tuple, value is list of strings
            Iterate over strs, make a letter_occurence dict of str, convert it to tuple then sort it
            if its in grouped_anagrams as a key, add str to list in value

            then once ur done just return the values of each item in a list

        """
        grouped_anagrams = {}
        for word in strs:
            letter_occurrences = self.count_letters(word)
            grouped_anagrams.setdefault(letter_occurrences, []).append(word)

        return list(grouped_anagrams.values())
            
