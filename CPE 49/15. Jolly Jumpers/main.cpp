#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  while (cin >> n) {
    int sequence[n], difference[n];
    memset(difference, 0, sizeof(difference));
    bool isJollyJumper = true;    
    
    cin >> sequence[0];
    for (int i = 1; i < n; i++) {
      cin >> sequence[i];
      difference[abs(sequence[i] - sequence[i - 1])]++;
    }
    for (int i = 1; i < n; i++) {
      if (difference[i] != 1) {
        isJollyJumper = false;
        break;      
      }
    }
    if (isJollyJumper) cout << "Jolly\n";
    else cout << "Not jolly\n";
  }

  return 0;
}