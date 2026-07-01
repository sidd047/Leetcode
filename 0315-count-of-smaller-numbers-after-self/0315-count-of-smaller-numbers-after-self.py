# class Solution:
#     def countSmaller(self, nums: List[int]) -> List[int]:
#         from bisect import bisect_left, insort

class Solution:
    def countSmaller(self, nums):
        ans = []
        sorted_list = []

        for num in reversed(nums):
            idx = bisect_left(sorted_list, num)
            ans.append(idx)
            insort(sorted_list, num)

        return ans[::-1]