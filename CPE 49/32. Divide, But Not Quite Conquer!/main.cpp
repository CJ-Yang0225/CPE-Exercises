#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  bool is_boring;
  
  while (cin >> n >> m) {
    vector<int> sequence;
    is_boring = false;

    if (n == 0 || m == 0) is_boring = true;
    else {
      sequence.push_back(n);
      while (n > 1) {
        if (n % m == 0){
          n /= m;
          sequence.push_back(n);
        } else {
          is_boring = true;
          break;
        }
      }
    }
    if (is_boring) cout << "Boring!\n";
    else {
      for (int i = 0; i < sequence.size(); i++) {
        if (i != 0) cout << " ";
        cout << sequence[i];
      }
      /* for (auto i = sequence.begin(); i < sequence.end(); i++) {
        if (i != sequence.begin()) cout << " ";
        cout << *i;
      } */
      cout << endl;
    }
  }

  return 0;
}