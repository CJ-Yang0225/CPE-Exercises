#include <bits/stdc++.h>

using namespace std;

/* 若 N - 1 可以將某數的每個位數加總後整除，代表此數在 N 進位時可被 N - 1 整除。 */
int main() {
  string input;
  int sum, max_temp, temp;
  
  // 測資含有沒有意義的空白
  while (getline(cin, input)) {
    sum = 0;
    max_temp = 1;    
    
    for (int i = 0; i < input.size(); i++) {
      if (input[i] >= '0' && input[i] <= '9') {
        temp = input[i] - '0';
      } else if (input[i] >= 'A' && input[i] <= 'Z') {
        temp = input[i] - 'A' + 10;
      } else if (input[i] >= 'a' && input[i] <= 'z') {
        temp = input[i] - 'a' + 36;
      } else continue;  // 可能包含了+、-符號與空白
      
      sum += temp;
      max_temp = max(max_temp, temp);
    }
    
    int i;
    for (i = max_temp; i < 62; i++) {
      if (!(sum % i)) {
        cout << i + 1 << endl;
        break;
      }
    }
    
    if (i == 62) cout << "such number is impossible!\n";
  }

  return 0;
}