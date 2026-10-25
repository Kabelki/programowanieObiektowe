#include <iostream>
#include <string>


using namespace std;
bool palindrom(string quote);

int main() {
  string input{};
  cout << "Type something: ";
  getline(cin, input);
  if (palindrom(input) == 1) {
    cout << "Palindrom" << endl;
    return 0;
  }
  else
    return 1;
}

bool palindrom(string quote) {
  int qLen = size(quote);
  int pCounter{};
  for (int i = 0; i < qLen / 2; i++)
    if (quote[i] != quote[qLen - 1 - i])
      return false;
    return true;
}