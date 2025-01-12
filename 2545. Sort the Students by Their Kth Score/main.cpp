#include <iostream>
#include <vector>
#include <algorithm>

class Soultion {
  public:
    std::vector<std::vector<int>> sortTheStudents(std::vector<std::vector<int>>& score, int k) {
      std::sort(score.begin(), score.end(), [k](const std::vector<int>& a, const std::vector<int>& b) {
        return a[k] > b[k];
      });
      return score;
    }
};

int main() {
  Soultion soultion;
  std::vector<std::vector<int>> score = {{100, 90}, {90, 95}, {85, 92}, {95, 88}, {92, 98}};
  int k = 2;
  std::vector<std::vector<int>> result = soultion.sortTheStudents(score, k);
  for (const auto& vec : result) {
    for (const auto& num : vec) {
      std::cout << num << " ";
    }
    std::cout << std::endl;
  }
}
