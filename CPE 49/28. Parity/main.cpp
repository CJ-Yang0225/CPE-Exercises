#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, i, p;
  string b;  
  
  while (cin >> n && n) {
    b = "", p = 0;
    
    while (n) {
      if (n % 2) {        
        b += '1';
        p++;
      } else b += '0';
      /*
      // 同上
      p += (n & 1);
      b += (n & 1) + '0';
      */
      n >>= 1;
    }
    reverse(b.begin(), b.end());  // 進制轉換短除法順序要由下往上
    cout << "The parity of " << b;
    cout << " is " << p << " (mod 2).\n";
  }

  return 0;
}