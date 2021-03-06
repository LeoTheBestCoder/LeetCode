import copy, random

class Solution:

    def __init__(self, nums: list[int]):
        self.origin = copy.deepcopy(nums)
        self.nums = nums

    def reset(self) -> list[int]:
        """
        Resets the array to its original configuration and return it.
        """
        self.nums = copy.deepcopy(self.origin)
        return self.nums

    def shuffle(self) -> list[int]:
        """
        Returns a random shuffling of the array.
        """
        random.shuffle(self.nums)
        return self.nums
        


# Your Solution object will be instantiated and called as such:
# obj = Solution(nums)
# param_1 = obj.reset()
# param_2 = obj.shuffle()