#include <iostream>
#include <string>


bool palindrom(std::string quote);

int main() {
  std::string input{};
  std::cout << "Type something: ";
  getline(std::cin, input);
  if (palindrom(input) == 1) {
    std::cout << "Palindrom" << std::endl;
    return 0;
  }
  else
    return 1;
}

bool palindrom(std::string quote) {
  int qLen = size(quote);
  int pCounter{};
  for (int i = 0; i < qLen / 2; i++)
    if (quote[i] != quote[qLen - 1 - i])
      return false;
    return true;
}