#include <iostream>
#include <string>

using namespace std;

int main() {
  string input{};
  cout << "Type something: ";
  getline(cin, input);
  int spaceCount {};
  for (int i = 0; i < size(input); i++)
    if (input[i] == ' ')
      spaceCount++;
  cout << "Number of spaces in the text: " << spaceCount << endl;
}