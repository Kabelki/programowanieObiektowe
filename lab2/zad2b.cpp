#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
  std::string input;
  std::cout << "Type something: ";
  getline(std::cin, input);
  reverse(input.begin(), input.end());
  for (char c : input) //działa tylko w c++ w c trzeba klasycznie
    std::cout << c;
  std::cout << std::endl;
  return 0;
}