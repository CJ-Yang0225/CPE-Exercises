#include <bits/stdc++.h>

using namespace std;

int main() {
  int T;
  string o;

  while (cin >> T >> ws && T) {
    int up = 1, n= 2, w = 3, e = 4, s = 5, down = 6, temp;
    while (T--) {
      getline(cin, o);
      if (o == "north") {
        temp = up, up = s, s = down, down = n, n = temp;
      } else if (o == "east") {
        temp = up, up = w, w = down, down = e, e = temp;
      } else if (o == "south") {
        temp = up, up = n, n = down, down = s, s = temp; 
      } else if (o == "west") {
        temp = up, up = e, e = down, down = w, w = temp;
      }
    }
    cout << up << endl;
  }

  return 0;
}