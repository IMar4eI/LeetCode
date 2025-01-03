#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
  std::vector<std::string> sortPeople(std::vector<std::string>& names, std::vector<int>& heights) {
    std::vector<std::pair<int, std::string>> pairs;

    for (int i = 0; i < names.size(); i++) {
      pairs.emplace_back(heights[i], names[i]);
    }

    std::sort(pairs.begin(), pairs.end(), [](const std::pair<int, std::string>& a, const std::pair<int, std::string>& b) {
      return a.first > b.first;
    });

    std::vector<std::string> result;
    for (const auto& pair : pairs) {
      result.push_back(pair.second);
    }

    return result;
  }
};

int main() {
  Solution solution;

  std::vector<std::string> names = {"Mary", "John", "Emily", "Michael"};
  std::vector<int> heights = {180, 165, 170, 175};
  std::vector<std::string> result = solution.sortPeople(names, heights);
  for (const auto& name : result) {
    std::cout << name << " ";
  }
  std::cout << std::endl;
}
