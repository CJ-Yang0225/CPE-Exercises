#include <bits/stdc++.h>

using namespace std;

int main() {
  char input;
  int isOddOrEven = 0;
  
  while (cin.get(input)) {
    if (input != '"') cout << input;
    else {
      if (isOddOrEven++ % 2) cout << "''";
      else cout << "``";
    }
  }
  
  return 0;
}