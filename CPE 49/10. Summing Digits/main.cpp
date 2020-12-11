#include <bits/stdc++.h>

using namespace std;

int main() {
  long long int input;
    
  while (cin >> input) {
    if (input == 0) break;
    while (input / 10) {
      input = input % 10 + input / 10;      
    }
    cout << input << endl;
  }
}


void f(string s) {
  int answer = 0;
  char buffer[10];

  for (int i = 0; i < s.size(); i++) {
    answer += s[i] - '0';
  }

  if (s.size() == 1) {
    cout << answer << endl;
  } else {
    itoa(answer, buffer, 10);
    f(buffer);
  }
}

int main() {
  string input;
	
  while (cin >> input) {
    if (input == "0") break;	
    f(input);
  }

  return 0;
}