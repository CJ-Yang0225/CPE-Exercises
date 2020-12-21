#include <bits/stdc++.h>

using namespace std;

int main() {
  int height, width, Case = 0;
  char field[102][102];
  int counts[102][102];
  
  while (cin >> height >> width && height && width) {
    memset(counts, 0, sizeof(counts));  // 初始化
    
    if (Case > 0) cout << endl;
    cout << "Field #" << ++Case << ":\n";
    
    cin.ignore(1024, '\n');  // 防止讀到錯誤資料
    for (int i = 1; i <= height; i++) {
      // 注意：因為判斷 * 需要看四周8格，為了方便在邊界多設一格
      cin.getline(&field[i][1], width + 1);
    }
    
    for (int i = 1; i <= height; i++) {
      for (int j = 1; j <= width; j++) {
        if (field[i][j] == '*') {
          // 如果發現 * 四周格子加一
          for (int k = i - 1; k <= i + 1; k++) {
            for (int p = j - 1; p <= j + 1; p++) {
              counts[k][p]++;
            }
          }
        }
      }
    }
    
    for (int i = 1; i <= height; i++) {
      for (int j = 1; j <= width; j++) {
        if (field[i][j] == '*') cout << "*";
        else cout << counts[i][j];
      }
      cout << endl;
    }
  }

  return 0;
}