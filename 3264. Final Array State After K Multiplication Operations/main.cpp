#include <iostream>
#include <vector>

class Solution {
public:
  std::vector<int> modifyArray(std::vector<int>& nums, int k, int multiplier) {
    if (nums.empty()) {
      return nums;
    }

    k = std::min(k, static_cast<int>(nums.size()));

    while (k > 0) {
      auto min_iter = std::min_element(nums.begin(), nums.end());
      *min_iter *= multiplier;
      k--;
    }
    return nums;
  }
};

int main() {
  Solution solution;

  std::vector<int> nums1 = {-4, 2, -1, 3};
  int k1 = 2;
  std::vector<int> result1 = solution.modifyArray(nums1, k1, multipler);
  std::cout << "Example 1 Result: ";
  for (int num : result1) {
    std::cout << num << " ";
  }
  std::cout << std::endl;
}