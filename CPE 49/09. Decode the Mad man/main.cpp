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
      // 輸入資料的 index 在 2 之前可能會出錯
      for (int j = 0; j < contrastData.size(); j++) {
        if (input[i] == contrastData[0]) {
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

#include <bits/stdc++.h>

using namespace std;

int main() {
  string keyboard = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
  string input;  
  
  while (getline(cin, input)) {    
    for (int i = 0; i < input.size(); i++) {
      if (isalpha(input[i])) input[i] = tolower(input[i]);
      // j = 2 確保不會 index out of bounds
      for (int j = 2; j < keyboard.size(); j++) {
        if (input[i] == keyboard[j]) {
          cout << keyboard[j - 2];
          break;
        } else if (all_of(keyboard.begin() + 2, keyboard.end(), [input, i](char c) { return input[i] != c; })) {
          // 利用 all_of + Lambda 遍歷輸入資料是否存在於表內，若是都不在，印出原本資料。
          cout << input[i];
          break;
        }
      }    
    }
    cout << endl;
  }
  
  return 0;
}