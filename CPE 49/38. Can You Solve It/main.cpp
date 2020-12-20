#include <bits/stdc++.h>

using namespace std;

int loc(int x, int y) {
  return (x + y) * (x + y + 1) / 2 + x;
}

int main() {
  int n, x1, y1, x2, y2, count = 0;
  
  cin >> n;  
  while (n--) {
    cout << "Case " << ++count << ": ";
    cin >> x1 >> y1 >> x2 >> y2;
    cout << loc(x2, y2) - loc(x1, y1) << endl;
  }
  
  return 0;
}