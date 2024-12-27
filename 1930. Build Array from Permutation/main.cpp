#include <iostream>
#include <vector>

class Solution {
public:
  std::vector<int> buildArray(const std::vector<int>& nums) {
    std::vector<int> result(nums.size());
    for (int i = 0; i < nums.size(); i++) {
      result[i] = nums[nums[i]];
    }
    return result;
  }
};

int main() {
  std::vector<int> nums = {0, 2, 1, 5, 3, 4};
  Solution solution;
  std::vector<int> result = solution.buildArray(nums);

  for (int i = 0; i < result.size(); i++) {
    std::cout << result[i] << " ";
  }
}
