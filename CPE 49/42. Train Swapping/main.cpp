#include <bits/stdc++.h>

using namespace std;

int main() {
  int Case, L, n;

  cin >> Case;

  while (Case--) {
    cin >> L;
    int a[L];
    for (int i = 0; i < L; i++) {
      cin >> a[i];
    }

    int count = 0;
    for (int i = L - 1; i >= 1; i--) {
      for (int j = i - 1; j >= 0; j--) {
        if (a[i] < a[j]) count++;
      }
    }
    cout << "Optimal train swapping takes " << count << " swaps.\n";
  }

  return 0;
}


int main() {
  int Case, L, n;

  cin >> Case;

  while (Case--) {
    cin >> L;

    int a[L];
    int count = 0;
    for (int i = 0; i < L; i++) {
      cin >> a[i];
      for (int j = 0; j < i; j++) {
        if (a[i] < a[j]) count++;
      }
    }
    printf("Optimal train swapping takes %d swaps.\n", count);
  }

  return 0;
}