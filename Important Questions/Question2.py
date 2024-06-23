# given a string s and a dictionary of string wordDict, return true if s can be segmented into a space-separated sequence of one or more dictionary words
import re
import sys
def wordBreak(s, wordDict):
    wordDict = set(wordDict)
    dp = [False] * (len(s) + 1)
    dp[0] = True
    for i in range(1, len(s) + 1):
        for j in range(i):
            if dp[j] and s[j:i] in wordDict:
                dp[i] = True
                break
    return dp[-1]

# Test cases
print(wordBreak("codewars", ["code", "wars"]))