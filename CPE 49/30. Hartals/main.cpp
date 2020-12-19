#include <bits/stdc++.h>

using namespace std;

int main() {
  int T, N, P, h;
  
  cin >> T;
  while (T--) {
    cin >> N >> P;
    int days[N + 1] = {0};
    // memset(days, 0, sizeof(days));  // 同上，將陣列內容設為 0
    
    for (int i = 0; i < P; i++) {
      cin >> h;
      for (int j = h; j <= N; j += h) {
        days[j] = 1;
      }
    }
    
    int sum = 0;
    for (int i = 0; i <= N; i++) {
      if (days[i] == 1 && i % 7 != 6 && i % 7 != 0)
        sum++;
    }
    
    cout << sum << endl;
  }

  return 0;
}