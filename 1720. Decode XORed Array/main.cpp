#include <iostream>
#include <vector>

class Solution {
public:
  std::vector<int> decode(std::vector<int>& encoded, int first) {
    std::vector<int> original;
    original.push_back(first);
    for (int i = 0; i < encoded.size(); i++) {
      original.push_back(encoded[i] ^ original[i]);
    }
    return original;
  }
};

int main() {
  Solution solution;

  std::vector<int> encoded = {1, 2, 3};
  int first = 1;
  std::vector<int> result = solution.decode(encoded, first);
  for (const auto& num : result) {
    std::cout << num << " ";
  }
  std::cout << std::endl;
}