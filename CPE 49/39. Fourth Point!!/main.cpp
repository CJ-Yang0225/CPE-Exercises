#include <bits/stdc++.h>

using namespace std;

int main() {
  double x1, y1, x2, y2, x3, y3, x4, y4, total_x, total_y;
  
  while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4) {
    total_x = x1 + x2 + x3 + x4;
    total_y = y1 + y2 + y3 + y4;

    /* 假設四邊形順時針四個點分別為： a, b, c, d 
    *  共同中心點： (a+c)/2 = (b+d)/2 -> a+c = b+d
    *  如果我們求的第四個頂點為 d (d = a+c-b)，重複的頂點為 b
    *  [輸入]:a+c+2b 和 [目標]:a+c-b 差了3倍的 b
    *  所以只要將輸入的4個座標減去3倍的重複座標，就可以獲得答案
    */
    if ((x1 == x3 && y1 == y3) || (x1 == x4 && y1 == y4)) {
      total_x -= 3 * x1;
      total_y -= 3 * y1;
    } else {
      total_x -= 3 * x2;
      total_y -= 3 * y2;
    }
    
    cout << fixed << setprecision(3)<< total_x << " " << total_y << endl;
  }

  return 0;
}