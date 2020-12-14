#include <bits/stdc++.h>

using namespace std;

int main() {
  int s, n, k;
  double p;
  
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> s;
  while (s--) {
    cin >> n >> p >> k;
    if (p == 0) {
      cout << "0.0000\n";
      continue;
    }
    double first_term = pow(1.0 - p, k - 1) * p;
    double sequence = (1.0 - pow(1.0 - p, n));
    cout << fixed << setprecision(4) << first_term / sequence << "\n";        
  }

  return 0;
}