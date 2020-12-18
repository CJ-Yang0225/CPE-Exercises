#include <bits/stdc++.h>

using namespace std;

int main() {
  string s1, s2;
  
  while (cin >> s1 >> s2) {
    sort(s1.begin(), s1.end());
    for (int i = 0; i < s1.size(); i++) {
      for (int j = 0; j < s2.size(); j++) {
        if (s1[i] == s2[j]) {
          cout << s1[i];
          s2.erase(j, 1);
          break;
        }
      }
    }
    cout << endl;
  }
}