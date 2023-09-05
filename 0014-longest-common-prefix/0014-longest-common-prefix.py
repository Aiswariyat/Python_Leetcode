class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:

        min_len = min(len(string) for string in strs)
        common_prefix = []

        for i in range(min_len):
            current_char = strs[0][i] #f
            for val in strs: #flower
                if val[i] != current_char:
                    return "".join(common_prefix)

            common_prefix.append(current_char)

        return "".join(common_prefix)
      
        