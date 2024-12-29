#include <iostream>
#include <vector>
#include <string>
#include <cstring>

class Solution {
public:
  std::vector<int> findWordsContainingCharacter(const std::vector<std::string>& words, char letter) {
    std::vector<int> result;

    for (int i = 0; i < words.size(); i++) {
      if (words[i].find(letter) != std::string::npos) {
        result.push_back(i);
      }
    }
    return result;
  }
};

int main() {
  Solution solution;

  // Пример 1
  std::vector<std::string> words1 = {"leet", "code"};
  char x1 = 'e';
  std::vector<int> result1 = solution.findWordsContainingCharacter(words1, x1);
  std::cout << "Example 1 Output: ";
  for (int index : result1) {
    std::cout << index << " ";
  }
  std::cout << std::endl;

  // Пример 2
  std::vector<std::string> words2 = {"abc", "bcd", "aaaa", "cbc"};
  char x2 = 'a';
  std::vector<int> result2 = solution.findWordsContainingCharacter(words2, x2);
  std::cout << "Example 2 Output: ";
  for (int index : result2) {
    std::cout << index << " ";
  }
  std::cout << std::endl;

  // Пример 3
  std::vector<std::string> words3 = {"abc", "bcd", "aaaa", "cbc"};
  char x3 = 'z';
  std::vector<int> result3 = solution.findWordsContainingCharacter(words3, x3);
  std::cout << "Example 3 Output: ";
  for (int index : result3) {
    std::cout << index << " ";
  }
  std::cout << std::endl;

}