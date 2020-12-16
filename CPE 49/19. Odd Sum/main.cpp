#include <bits/stdc++.h>

using namespace std;

int main() {
  int t, a, b;
  
  cin >> t;
  for (int Case = 1; Case <= t; Case++) {
    int sum = 0;

    cin >> a >> b;
    // 利用三元運算子過濾掉偶數
    for (int i = (a % 2 ? a : a + 1); i <= b; i += 2) {
      sum += i;
    }
    cout << "Case " << Case << ": " << sum << endl;
  }

  return 0;
}