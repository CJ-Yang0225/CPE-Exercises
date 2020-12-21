#include <bits/stdc++.h>

using namespace std;

int main() {
  int T, r, s[30000];
  cin >> T;
  while (T--) {
    int sum = 0;
    cin >> r;
    for (int i = 0; i < r; i++) cin >> s[i];
    sort(s, s + r);
    int mid = s[r / 2];
    for (int i = 0; i < r; i++) sum += abs(s[i] - mid);
    cout << sum << endl;
  }

  return 0;
}