#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b, cnt;
  
  while (cin >> a >> b) {
    if (a + b == 0) break;
    
    int sqrt_a = sqrt(a);
    int sqrt_b = sqrt(b);
    
    if (sqrt_a * sqrt_a != a) sqrt_a++;
    
    cout << sqrt_b - sqrt_a + 1 << endl;
  }

  return 0;
}