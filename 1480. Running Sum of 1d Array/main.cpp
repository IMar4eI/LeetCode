#include <iostream>
#include <vector>

class Solution {
public:
  std::vector<int> runningSum(std::vector<int>& nums) {
    std::vector<int> result(nums.size());
    result[0] = nums[0];
    for (int i = 1; i < nums.size(); i++) {
      result[i] = result[i - 1] + nums[i];
    }
    return result;
  }
};

int main() {
  Solution solution;

  std::vector<int> nums1 = {1, 2, 3, 4};
  std::vector<int> result1 = solution.runningSum(nums1);
  std::cout << "Example 1 Result: ";
  for (int num : result1) {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  std::vector<int> nums2 = {1, 1, 1, 1, 1};
  std::vector<int> result2 = solution.runningSum(nums2);
  std::cout << "Example 2 Result: ";
  for (int num : result2) {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  std::vector<int> nums3 = {3, 1, 2, 10, 1};
  std::vector<int> result3 = solution.runningSum(nums3);
  std::cout << "Example 3 Result: ";
  for (int num : result3) {
    std::cout << num << " ";
  }
  std::cout << std::endl;
}
