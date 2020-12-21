#include <iostream>

using namespace std;
 
int main() {
  int N;
  while (cin >> N){
    int ans = N;
    while (N >= 3){
      ans += N / 3;
      N = N / 3 + N % 3;
    }
    ans += (N == 2);
    cout << ans << "\n";
  }
  return 0;
}

// int main() {
//   int n;
//   // 輸入可樂數量
//   while(cin>>n) {
//     cout<<int(n*1.5)<<endl;  // 利用公式解 
//   } 
//   return 0;
// }