import re

class Solution:
    def isPalindrome(self, s: str) -> bool:
        cleaned = re.sub(r'[^a-zA-Z0-9]', '', s).lower()
        length = len(cleaned)

        for i in range(length // 2):
            if cleaned[i] != cleaned[length - i - 1]:
                return False
        return True