#include <bits/stdc++.h>

using namespace std;

int a[500000];

int main() {
  int i,n,x,y;
  
  while (cin >> x) {
    for (n = 0; ; n++) {
      cin >> a[n];
      if (getchar() == '\n') break;      
    }
    
    y = a[0] * n;
    
    for (i = 1; i < n; i++) {
      y = y * x + a[i] * (n - i);
    }
    
    cout << y << endl;
  }

  return 0;
}