#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

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