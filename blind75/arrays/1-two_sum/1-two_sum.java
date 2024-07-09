import java.util.HashMap;
import java.util.Map;

class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> num_map = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            int complement = target - nums[i];
            if (num_map.containsKey(complement)) {
                return new int[]{num_map.get(complement), i};
            }
            num_map.put(nums[i], i);
        }
        return null;
    }

    public static void main(String[] args) {
        Solution solution = new Solution();

        // Test case 1
        int[] nums1 = {2, 7, 11, 15};
        int target1 = 9;
        int[] expected1 = {0, 1};
        int[] result1 = solution.twoSum(nums1, target1);
        System.out.println("Test case 1: " + java.util.Arrays.equals(result1, expected1) + ", Output: " + java.util.Arrays.toString(result1));

        // Test case 2
        int[] nums2 = {3, 2, 4};
        int target2 = 6;
        int[] expected2 = {1, 2};
        int[] result2 = solution.twoSum(nums2, target2);
        System.out.println("Test case 2: " + java.util.Arrays.equals(result2, expected2) + ", Output: " + java.util.Arrays.toString(result2));

        // Test case 3
        int[] nums3 = {3, 3};
        int target3 = 6;
        int[] expected3 = {0, 1};
        int[] result3 = solution.twoSum(nums3, target3);
        System.out.println("Test case 3: " + java.util.Arrays.equals(result3, expected3) + ", Output: " + java.util.Arrays.toString(result3));

        // Test case 4
        int[] nums4 = {1, 2, 3, 4, 5};
        int target4 = 10;
        int[] expected4 = null;
        int[] result4 = solution.twoSum(nums4, target4);
        System.out.println("Test case 4: " + (result4 == null) + ", Output: " + java.util.Arrays.toString(result4));

        // Test case 5
        int[] nums5 = {1, 2, 3, 4, 5, 6};
        int target5 = 11;
        int[] expected5 = {4, 5};
        int[] result5 = solution.twoSum(nums5, target5);
        System.out.println("Test case 5: " + java.util.Arrays.equals(result5, expected5) + ", Output: " + java.util.Arrays.toString(result5));
    }
}
