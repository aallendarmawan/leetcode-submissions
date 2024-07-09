from typing import List

class Solution:
    '''
    One-pass solution
    Time complexity: O(n)
    Space complexity: O(n)
    '''
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        num_map = {}  # Create a hash map, which will store the number and its index
        n = len(nums)

        for i in range(n):
            complement = target - nums[i]
            if complement in num_map:
                return [num_map[complement], i]
            num_map[nums[i]] = i

        return []  # No solution found
    
def test_twoSum():
    solution = Solution()
    
    # Test case 1
    nums = [2, 7, 11, 15]
    target = 9
    expected = [0, 1]
    result = solution.twoSum(nums, target)
    print(f'Test case 1: {result == expected}, Output: {result}')
    
    # Test case 2
    nums = [3, 2, 4]
    target = 6
    expected = [1, 2]
    result = solution.twoSum(nums, target)
    print(f'Test case 2: {result == expected}, Output: {result}')
    
    # Test case 3
    nums = [3, 3]
    target = 6
    expected = [0, 1]
    result = solution.twoSum(nums, target)
    print(f'Test case 3: {result == expected}, Output: {result}')
    
    # Test case 4
    nums = [1, 2, 3, 4, 5]
    target = 10
    expected = []
    result = solution.twoSum(nums, target)
    print(f'Test case 4: {result == expected}, Output: {result}')
    
    # Test case 5
    nums = [1, 2, 3, 4, 5, 6]
    target = 11
    expected = [4, 5]
    result = solution.twoSum(nums, target)
    print(f'Test case 5: {result == expected}, Output: {result}')

# Call the test function
test_twoSum()

