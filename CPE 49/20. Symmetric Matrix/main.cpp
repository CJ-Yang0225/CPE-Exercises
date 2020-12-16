#include <bits/stdc++.h>

using namespace std;

int main() {
  int t, n;
  char c1, c2;
  
  cin >> t;
  for (int i = 1; i <= t; i++) {
    bool isSymmetric = true;
    
    cin >> c1 >> c2 >> n;
    long long matrix[n][n];
    
    for (int y = 0; y < n; y++) {
      for (int x = 0; x < n; x++) {
        cin >> matrix[y][x];
        if (matrix[y][x] < 0) isSymmetric = false;
      }
    }
    cout << "Test #" << i << ": ";
    if (!isSymmetric) {
      cout << "Non-symmetric.\n";
      continue;
    }
    
    for (int y = 0; y <= n / 2; y++) {
      for (int x = 0; x < n - y; x++) {
        if (matrix[y][x] != matrix[n - y - 1][n - x - 1]) {
          isSymmetric = false;
          break;
        }
      }
    }
    cout << (isSymmetric ? "Symmetric.\n" : "Non-symmetric.\n");
  }
  
  return 0;
}