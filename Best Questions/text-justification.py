from typing import List
import math
class Solution:
    def fullJustify(self, words: List[str], maxWidth: int) -> List[str]:
        result = []
        line = []
        curr_len = 0
        for word in words:
            if curr_len + len(word) + len(line) <= maxWidth:
                line.append(word)
                curr_len += len(word)
            else:
                spaces = maxWidth - curr_len
                if len(line) == 1:
                    result.append(line[0] + ' ' * spaces)
                else:
                    gaps = len(line) - 1
                    spaces_between_words = spaces // gaps
                    extra_spaces = spaces % gaps
                    justified_line = ''
                    for i in range(len(line) - 1):
                        justified_line += line[i] + ' ' * spaces_between_words
                        if extra_spaces > 0:
                            justified_line += ' '
                            extra_spaces -= 1
                    justified_line += line[-1]
                    result.append(justified_line)
                line = [word]
                curr_len = len(word)
        last_line = ' '.join(line)
        last_line += ' ' * (maxWidth - len(last_line))
        result.append(last_line)
        return result

# let's test the solution
sol = Solution()
words = ["This", "is", "an", "example", "of", "text", "justification."]
maxWidth = 16
print(sol.fullJustify(words, maxWidth)) 
