#include <iostream>
#include <map>
#include <iomanip> // setprecision()

using namespace std;

int main() {
  int T, count, sum, Case = 0;
  string name;
  map<string, int, less<string>> species;  // 第三個參數為 Map 中 Key 排序的根據 (預設 less，可換 greater)
  
  // 注意：測資有兩行空白
  // std::cin >> std::ws 使用時會跳過空白、換行，方便後續讀取實際的內容
  cin >> T >> ws;
  
  // cin >> T;  // 同上
  // getline(cin, name);
  // getline(cin, name);
  while (T--) {
    species.clear();  // 初始化 Map
    sum = 0;
    while (getline(cin, name) && name != "") {
      species[name]++;
      sum++;
    }
    
    if (++Case > 1) cout << endl;
    
    for (auto iter : species) {
      cout << iter.first << " " << fixed << setprecision(4) << (double)iter.second / sum * 100 << endl;
    }
  }
  
  return 0;
}