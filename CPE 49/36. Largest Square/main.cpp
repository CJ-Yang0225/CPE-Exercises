#include <bits/stdc++.h>

using namespace std;

int M, N;
string grid_map[100];

int check_square(int x, int y , int radius) {
  int top, right, bottom, left;
  
  char point = grid_map[x][y];
  
  top = x - radius;
  right = y + radius;
  bottom = x + radius;
  left = y - radius;
  
  if (top < 0 || right >= N || bottom >= M || left < 0) return 0;
  
  for (int i = top; i <= bottom; i++) {
    for (int j = left; j <= right; j++) {
      if (grid_map[i][j] != point) return 0;
    }
  }
  return 1;
}

int main() {
  int T, Q, r, c;
  
  cin >> T;
  while (T--) {
    cin >> M >> N >> Q;
    cin.ignore(1024, '\n');

    cout << M << " " << N  << " " << Q << endl;
    
    for (int i = 0; i < M; i++) {
      getline(cin, grid_map[i]);
    }
    
    for (int i = 0; i < Q; i++) {
      int radius = 1;
      cin >> r >> c;
      while (check_square(r, c, radius)) radius++;
      cout << radius * 2 - 1 << endl;
    }
  }

  return 0;
}
