#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, times = 0;
  
  while (cin >> n) {
    int sequence[n];
    set<int> b2_sequence;  // set 方便確認一個值是否存在
    bool is_b2s = true;
    
    for (int i = 0; i < n; i++)
      cin >> sequence[i];    
    
    // 數列中的兩兩之和不可重複 (i <= j)
    for (int i = 0; i < n; i++) {      
      for (int j = i; j < n; j++) {
        int temp = sequence[i] + sequence[j];

        if (b2_sequence.count(temp)) {
          is_b2s = false;
          break;
        }
        b2_sequence.insert(temp);
      }      
    }
    cout << "Case #" << ++ times << ": ";
    cout << (is_b2s ? "It is a B2-Sequence." : "It is not a B2-Sequence.") << "\n\n";
  }
  return 0;
}