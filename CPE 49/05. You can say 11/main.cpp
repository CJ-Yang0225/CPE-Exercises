#include <bits/stdc++.h>

using namespace std;

int main() {
  string n;
  
  while (cin >> n) {
    int oddSum = 0, evenSum = 0;
    if (n == "0") break;
    
    for (int i = 0; i < n.length(); i++) {
      if (i % 2) oddSum += n[i] - '0';
      else evenSum += n[i] - '0';
    }
    
    if (abs(oddSum - evenSum) % 11 == 0) cout << n << " is a multiple of 11." << endl;
    else cout << n << " is not a multiple of 11." << endl;
  }
  return 0;
}

// int main(){
//   string a;
//   while(cin >> a && a != "0") {
//     long long sum[2] = {0,0}; //初始化

//     for(int i = 0; i < a.length(); i++) {
//       // 會分為"sum[0](整除)"或"sum[1](餘1)"
//       sum[i % 2] = sum[i % 2] + a[i] - 48; //字串'0'的數值為48，所以必須扣除掉，或是直接 -'0'
//     }
//     if((sum[0] - sum[1]) % 11)
//       cout << a << " is not a multiple of 11." << endl;
//     else
//       cout << a << " is a multiple of 11." << endl;      
//   }
//   return 0;
// }