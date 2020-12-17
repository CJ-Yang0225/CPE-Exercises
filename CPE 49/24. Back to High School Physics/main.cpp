#include <bits/stdc++.h>

using namespace std;

int main() {
  int v, t;
  
  while (cin >> v >> t) {
    // 位移 = ∆x = v ∙ ∆t (題目為 2t)
    cout << 2 * v * t << endl;  
  }

  return 0;
}