#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string quote;
    cout << "Type something: ";
    getline(cin, quote);
    int qLen = size(quote);
    for (int i = 0; i < qLen / 2; i++) {
        char qBuff = quote[i]; 
        quote[i] = quote[qLen -1 - i];
        quote[qLen -1 - i] = qBuff;
    }
    cout << quote << endl;
    
    return 0;
}