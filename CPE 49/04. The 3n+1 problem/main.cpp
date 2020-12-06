#include <bits/stdc++.h>

using namespace std;

int main() {
  int n1, n2;
  
  while (cin >> n1 >> n2) {
  	int maxLength = 0, length, now;
  	
    cout << n1 << " " << n2 << " ";
    
    if (n1 > n2) swap(n1, n2);
    
    for (int i = n1; i <= n2; i++) {
      now = i;
      length = 1;
      while (now != 1) {
        if (now % 2) now = 3 * now + 1;
        else now /= 2;
        length++;
      }
      if (length > maxLength) maxLength = length;
    }
    cout << maxLength << endl;
  }
  return 0;
}