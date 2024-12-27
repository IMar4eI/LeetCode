#include <iostream>
#include <vector>

class Solution {
public:
  std::vector<int> getConcatenation(const std::vector<int>& nums) {
    int size = nums.size();
    std::vector<int> new_vector(size * 2);

    for (int i = 0; i< size; i++) {
      new_vector[i] = nums[i];
      new_vector[i + size] = nums[i];
    }
    return new_vector;
  }
};

int main() {
  std::vector<int> nums = {1, 2, 3};
  Solution solution;
  std::vector<int> result = solution.getConcatenation(nums);
  for (int i = 0; i < result.size(); i++) {
    std::cout << result[i] << " ";
  }

}