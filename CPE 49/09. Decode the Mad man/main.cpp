#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
  string contrastData = " `1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./";
  string input;
  
  while (getline(cin, input)) {
    for (int i = 0; i < input.size(); i++) {
      if (isalpha(input[i])) input[i] = tolower(input[i]);
      
      for (int j = 0; j < contrastData.size(); j++) {
        if (input[i]== contrastData[0]) {
          cout << " ";
          break;
        } else if (input[i] == contrastData[j]) {
          cout << contrastData[j - 2];
          break;
        }
      }
    }
    
    cout << endl;
  }

  
  return 0;
}