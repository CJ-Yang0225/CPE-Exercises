#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m, b1, b2;
  
  cin >> n;
  while (n--) {
    b1 = 0, b2 = 0;
    cin >> m;
    int dec = m;
    
    while (dec) {
      if (dec % 2) b1++;
      dec /= 2;
    }
    
    int hex = 0, mul = 1;
    while (m) {
      hex += (m % 10) * mul;
      mul *= 16;
      m /= 10;
    }
    
    while (hex) {
      if (hex % 2) b2++;
      hex /= 2;
    }    
    cout << b1 << " " << b2 << endl;
  }
  
  return 0;
}


// int main() {
//   int n, m, b1, b2;
//   char bin[10];
  
//   cin >> n;
//   while (n--) {
//     b1 = 0, b2 = 0;
        
//     cin >> m;
//     itoa(m, bin, 2);
//     for (int i = 0; i < strlen(bin); i++) {
//       if (bin[i] == '1') b1++;
//     }    
    
//     int hex = 0, mul = 0;
//     while (m) {
//       hex += (m % 10) * pow(16, mul++);      
//       m /= 10;
//     }
    
//     while (hex) {
//       if (hex % 2) b2++;
//       hex >>= 1;  // 同 hex /= 2
//     }
//     cout << b1 << " " << b2 << endl;    
//   }
  
//   return 0;
// }
