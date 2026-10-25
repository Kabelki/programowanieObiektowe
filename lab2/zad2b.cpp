#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  string input;
  cout << "Type something: ";
  getline(cin, input);
  reverse(input.begin(), input.end());
  for (char c : input)
    cout << c;
  cout << endl;
  return 0;
}