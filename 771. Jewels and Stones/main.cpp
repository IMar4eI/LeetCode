#include <iostream>
#include <set>

class Solution {
  public:
    int numJewelsInStones(const std::string& stones, const std::string& jewels) {
      std::set<char> jewelSet(jewels.begin(), jewels.end());
      int count = 0;

      for (char stone : stones) {
        if (jewelSet.count(stone)) {
          count++;
        }
      }
      return count;
    }
};

int main() {
  Solution solution;
  std::string stones = "aA", jewels = "aAAbbbb";
  std::cout << solution.numJewelsInStones(stones, jewels) << std::endl;
  return 0;
}
