class Solution:
    def longestIdealString(self, s: str, k: int) -> int:
        # Function to calculate the absolute difference in alphabet order
        def abs_diff(a, b):
            return abs(ord(a) - ord(b))
        
        n = len(s)
        dp = [0] * n  # Initialize an array to store the lengths of the longest ideal subsequences ending at each position

        for i in range(n):
            # Initialize the length of the longest ideal subsequence ending at position i
            dp[i] = 1
            
            # Iterate over previous characters to find the maximum length
            for j in range(i):
                # Check if the absolute difference in alphabet order is less than or equal to k
                if abs_diff(s[i], s[j]) <= k:
                    dp[i] = max(dp[i], dp[j] + 1)
        
        # Return the maximum length from the dp array
        return max(dp)