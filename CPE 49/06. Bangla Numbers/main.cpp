#include <bits/stdc++.h>

using namespace std;

void bangla(long long int n) {
  if (n / 10000000) {    	
  	bangla(n / 10000000);
  	cout << " kuti";
  	n %= 10000000;
  }
  
  if (n / 100000) {
    bangla(n / 100000);
    cout << " lakh";
    n %= 100000;
  }
  
  if (n / 1000) {  
    bangla(n / 1000);
    cout << " hajar";
    n %= 1000;
  }
  
  if (n / 100) {
    bangla(n / 100);    
    cout << " shata";
    n %= 100;
  }
  
  if (n) cout << " " << n;
}

int main() {
  long long int input;  
  int times = 0;
  
  while (cin >> input) {    
    cout << setw(4) << ++times << ".";
    if (input == 0) cout << " " << 0;
    bangla(input);
    cout << endl;
  }
}
