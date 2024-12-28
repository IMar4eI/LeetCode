#include <iostream>
#include <vector>

class Solution {
public:
  std::vector<int> shuffle(std::vector<int>& nums, int n) {
    std::vector<int> result;
    result.reserve(n * 2);
    for (int i = 0; i < n; i++) {
      result.push_back(nums[i]);
      result.push_back(nums[i + n]);
    }
    return result;
  }
};

int main() {
  std::vector<int> nums = {2, 5, 1, 3, 4, 7};
  Solution solution;
  std::vector<int> result = solution.shuffle(nums, 3);
  for (int i = 0; i < nums.size(); i++) {
    std::cout << result[i] << " ";
  }
}