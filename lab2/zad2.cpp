#include <iostream>
#include <string>
#include <vector>


std::string strReverse(std::string quote);

int main() {
  std::string input{};
  std::cout << "Type something: ";
  getline(std::cin, input);
  input = strReverse(input);  
  std::cout << input << std::endl;

  return 0;
}

std::string strReverse(std::string quote) {
  int qLen = size(quote);
  for (int i = 0; i < qLen / 2; i++) {
    char qBuff = quote[i];
    quote[i] = quote[qLen - 1 - i];
    quote[qLen - 1 - i] = qBuff;
  }
  return quote;
}