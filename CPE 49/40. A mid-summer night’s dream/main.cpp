#include <bits/stdc++.h>

using namespace std;

int a[1000000];

int main() {
  int n;  
  
  while (cin >> n) {    
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    
    sort(a, a + n);
    
    int min, max;
    for (int i = 0; i < n; i++) {
      if (n % 2) min = max = a[n / 2];
      else min = a[n / 2 - 1], max = a[n / 2];
    }
    
    int possible = max - min + 1;
    int count = 0;
    
    for (int i = 0; i < n; i++)
      if (a[i] >= min && a[i] <= max) count++;
      
    printf("%d %d %d\n", min, count, possible);
  }
}