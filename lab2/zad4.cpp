#include <iostream>
#include <string>


int main() {
  std::string input{};
  std::cout << "Type something: ";
  getline(cin, input);
  int spaceCount {};
  for (int i = 0; i < size(input); i++)
    if (input[i] == ' ')
      spaceCount++;
  std::cout << "Number of spaces in the text: " << spaceCount << std::endl;
}