#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
string strReverse(string quote);

int main() {
  string input{};
  cout << "Type something: ";
  getline(cin, input);
  input = strReverse(input);  
  cout << input << endl;

  return 0;
}

string strReverse(string quote) {
  int qLen = size(quote);
  for (int i = 0; i < qLen / 2; i++) {
    char qBuff = quote[i];
    quote[i] = quote[qLen - 1 - i];
    quote[qLen - 1 - i] = qBuff;
  }
  return quote;
}