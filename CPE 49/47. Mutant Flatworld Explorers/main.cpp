#include <bits/stdc++.h>

using namespace std;

// N(0,1) E(1,0) S(0,-1) W(-1,0)
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
char orientation[5] = "NESW";

int grid[51][51] = {0};

/* 自訂方向的代號
      N:0
       |
 W:3 ----- E:1
       |
      S:2
*/

int main() {
  int bounder_x, bounder_y, now_x, now_y, next_x, next_y, dir;
  char o;
  string move;
  
  cin >> bounder_x >> bounder_y;
  while (cin >> now_x >> now_y >> o) {
    for (dir = 0; dir < 4; dir++) 
      if (o == orientation[dir]) break;  // 確認一開始面對的方向
    cin.ignore(1024, '\n');  // 清空緩存，直到碰到換行符號 (防止 getline 讀到空白)
    getline(cin, move);
    for (int i = 0; i < move.size(); i++) {      
      if (move[i] == 'F') {
        next_x = now_x + dx[dir];
        next_y = now_y + dy[dir];
        
        // 若目標超出範圍
        if (next_x < 0 || next_x > bounder_x || next_y < 0 || next_y > bounder_y) {
          if (grid[now_x][now_y] == 0) {            
            grid[now_x][now_y] = 1;
            cout << now_x << " " << now_y << " " << orientation[dir] << " LOST\n";
            break;
          } // 超出範圍 break，所以就不管 next_x, next_y 的值了
        } else {
          // 正常範圍 -> 移動至目標
          now_x = next_x;
          now_y = next_y;
        }
        
      } else if (move[i] == 'R') {
        dir = (dir + 1) % 4;  // 轉向公式：向右
      } else if (move[i] == 'L') {
        dir = (dir + 3) % 4;  // 轉向公式：向左
      }
      if (i == move.size() - 1) cout << now_x << " " << now_y << " " << orientation[dir] << endl;
    }
  }

  return 0;
}
