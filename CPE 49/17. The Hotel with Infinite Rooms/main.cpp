#include <bits/stdc++.h>

using namespace std;

int main() {
  long long int s, d;
  
  while (cin >> s >> d) {    
    while (d > s) {
      d -= s;
      s++;
    }
    cout << s << endl;
  }

  return 0;
}