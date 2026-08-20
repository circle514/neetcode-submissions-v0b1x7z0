import re

class Solution:
    def isPalindrome(self, s: str) -> bool:
        cleaned = re.sub(r'[^a-zA-Z0-9]', '', s).lower()
        length = len(cleaned)
        print(length)


        for i in range(length):
            print(f"Comparing {cleaned[i]} and {cleaned[length - i - 1]}")
            if cleaned[i] != cleaned[length - i - 1]:
                return False
        return True