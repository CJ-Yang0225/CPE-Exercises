#include <bits/stdc++.h>

using namespace std;

int main() {
  int T, Q, n;
  
  cin >> T;
  for (int Case = 1; Case <= T; Case++) {
    if (Case > 1) cout << endl;  // 依照題目輸出格式
    map<int, int> cost;
    
    // 各字元的花費
    for (int i = 0; i < 36; i++) {
      cin >> cost[i];    
    }
    
    cout << "Case " << Case << ":\n";
    
    cin >> Q;
    while (Q--) {
      cin >> n;      
      int cheapest = INT_MAX;  // 隨意設定最大值
      int total_cost;
      map<int, int> cheapest_list;
      
      for (int i = 2; i < 37; i++) {
        int k = n;  // 注意：利用 k 複製 n，保留原始輸入資料，將 k 用於 2~36 進制的運算
        total_cost = 0;

        // 計算出各進制的總花費
        while (k) {
          total_cost += cost[k % i];  
          k /= i;
        }
        cheapest_list[i] = total_cost;  // 記錄每個進制的總花費
        cheapest = min(cheapest, total_cost);  // 獲得最低花費
      }
      
      cout << "Cheapest base(s) for number " << n << ":";
      
      // 如果有重複的最低花費，由小到大逐一印出
      for (int i = 2; i < 37; i++) {
        if (cheapest_list[i] == cheapest) cout << " " << i;
      }
      cout << endl;
    }
  }

  return 0;
}