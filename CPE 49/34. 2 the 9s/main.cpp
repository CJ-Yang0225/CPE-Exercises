#include <bits/stdc++.h>

using namespace std;

int main() {
  string input;  
  
  while (cin >> input && input != "0") {
    int sum = 0;
    for (int i = 0; i < input.size(); i++) {
      sum += input[i] - '0';
    }
    
    int degree = 1;
    
    while (sum > 9 && sum % 9 == 0) {
      int temp = sum;
      sum = 0;
      
      while (temp) {
        sum += temp % 10;
        temp /= 10;        
      }
      degree++;
    }
    
    cout << input;
    if (sum % 9) cout << " is not a multiple of 9.\n";
    else cout  << " is a multiple of 9 and has 9-degree " << degree << ".\n";    
  }
  
  return 0;
}