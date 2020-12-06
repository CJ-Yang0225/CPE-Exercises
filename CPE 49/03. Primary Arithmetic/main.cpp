#include <bits/stdc++.h>

using namespace std;

int a, b;

int main() {
  while (cin >> a >> b) {
    int count = 0;
    int carry = 0;
    
    if (a == 0 & b == 0) break;
	
    while (a || b) {
      carry = a % 10 + b % 10 + carry;
      carry /= 10;
      a /= 10;
      b /= 10;
    
      if (carry) count++;
    }
  
    if (count == 0) cout << "No carry operation." << endl;
    else if (count == 1) cout << "1 carry operation." << endl;
    else cout << count << " carry operations." << endl;
  }
  return 0;
}