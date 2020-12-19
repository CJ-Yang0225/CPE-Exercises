#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
  while ((a %= b) && (b %= a));
  return a + b;
}

int main() {
  int N;
  string s1, s2;
  
  cin >> N;
  for (int Case = 1; Case <= N; Case++) {
    int n1 = 0, n2 = 0;
    
    cout << "Pair #" << Case << ": ";
    cin >> s1 >> s2;

    // 由左至右
    for (int i = 0; i < s1.size(); i++) {
      n1 <<= 1;  // 進位 (左移)
      n1 += s1[i] - '0';  // 字元轉數字
    }
    
    for (int i = 0; i < s2.size(); i++) {
      n2 = n2 * 2 + s2[i] - '0';
    }
    
    // 一個位元的字串不合法
    if (gcd(n1, n2) > 1) cout << "All you need is love!\n";
    else cout << "Love is not all you need!\n";
  }

  return 0;
}