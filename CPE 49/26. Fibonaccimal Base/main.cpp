#include <bits/stdc++.h>

using namespace std;

int main() {
  int f[39] = {1, 2};  // 初始值 (省略不會用到的0, 1 => 1 = 0 + 1)
  int t, n;
  
  // 設定初始值後自動產生後項
  for (int i = 2; i < 39; i++) {
    f[i] = f[i - 2] + f[i - 1];
  }
  
  cin >> t;
  while (t--) {
    bool is_print0 = false;
    cin >> n;
    cout << n << " = ";
    
    for (int i = 38; i >= 0; i--) {
      // 題目規定：不可以使用費氏數列中連續的項
      if (n / f[i] == 1) {
        cout << "1";
        n %= f[i];
        is_print0 = true;  // 當最高位數已經印 1 後，後續項次根據條件補 0
      } else if (is_print0) {
        cout << "0";
      }
    }
    cout << " (fib)\n";
  }

  return 0;
}