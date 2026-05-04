#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr_sum = 0;
        int max_sum = INT_MIN;
        for (int num : nums) {
            curr_sum += num;
            max_sum = max(max_sum, curr_sum);
            if (curr_sum < 0) curr_sum=0;

        }
        return max_sum;

    }
};

struct TestCase {
    vector<int> nums;
};

int main() {
    vector<TestCase> tests = {{{-2,1,-3,4,-1,2,1,-5,4}}, {{1}}, {{5,4,-1,7,8}}};
    Solution soln;
    for (auto& t : tests) {
        int current_res = soln.maxSubArray(t.nums);
        cout << current_res << endl;
    }
    return 0;

}