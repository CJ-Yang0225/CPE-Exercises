#include <iostream>
#include <string>

using namespace std;

int main() {
	long long int input;
	
	while (cin >> input) {
		if (input == 0) break;
		
		while (input / 10) {
			input= input % 10 + input / 10;
		}
		
		cout << input << endl;
	}

	return 0;
}