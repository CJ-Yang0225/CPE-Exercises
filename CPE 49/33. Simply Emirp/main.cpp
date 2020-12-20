#include <bits/stdc++.h>

using namespace std;

bool is_prime(int n) {
  for (int i = 2; i < n; i++)
    if (n % i == 0) return false;
  return true;
}

int main() {
  int N;
  
  while (cin >> N) {
    int temp = N, reverse_N = 0;
    while (temp) {
      reverse_N = reverse_N * 10 + temp % 10;
      temp /= 10;
    }
  
    cout << N;
    if (is_prime(N))
      if (is_prime(reverse_N) && N != reverse_N) cout << " is emirp.\n";
      else cout <<" is prime.\n"; 
    else cout << " is not prime.\n";
  }
}