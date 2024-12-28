#include <iostream>
#include <vector>

class Solution {
public:
  std::vector<int> findArray(const std::vector<int>& prefix) {
    std::vector<int> result;
    result.reserve(prefix.size());

    for (int i = 0; i < prefix.size(); i++) {
      if (i == 0) {
        result.push_back(prefix[0]);
      } else {
        result.push_back(prefix[i] ^ prefix[i - 1]);
      }
    }
    return result;
  }
};

int main() {
  std::vector<int> prefix = {5, 2, 0, 3, 1};
  Solution solution;
  std::vector<int> result = solution.findArray(prefix);
  for (int i = 0; i < result.size(); i++) {
    std::cout << result[i] << " ";
  }
}