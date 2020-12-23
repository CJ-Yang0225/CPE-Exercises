#include <bits/stdc++.h>

using namespace std;
 
int main() {
  map <char, vector<int> > finger;
  // 只用 1 ~ 10
  finger['c'] = {0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1};
  finger['d'] = {0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0};
  finger['e'] = {0, 0, 1, 1, 1, 0, 0, 1, 1, 0, 0};
  finger['f'] = {0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 0};
  finger['g'] = {0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0};
  finger['a'] = {0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0};
  finger['b'] = {0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0};
  finger['C'] = {0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0};
  finger['D'] = {0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 0};
  finger['E'] = {0, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0};
  finger['F'] = {0, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0};
  finger['G'] = {0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0};
  finger['A'] = {0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0};
  finger['B'] = {0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0};
    
  int t;
  
  string s;
  cin >> t;
  getline(cin, s);
  while (t--){
    getline(cin, s);
    int cnt[11] = {0};
    int a[11] = {0}; //status (按鍵是否被按壓)
    for (int i = 0; i < s.size(); i++){
      for (int j = 1; j <= 10; j++){
        if (finger[s[i]][j]){
          if (a[j]) continue;
          else {
            a[j] = 1;
            cnt[j]++;
          }
        } else {
          a[j] = 0;
        }
      }
    }
    for (int i = 1; i <= 10; i++){
      cout << cnt[i] << " ";
    }
    cout << "\n";
  }
  return 0;
}