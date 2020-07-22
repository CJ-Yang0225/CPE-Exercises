#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	string input;
	
	while (cin >> input) {
		if (input == "0") break;
				
		int oddSum = 0, evenSum = 0;		
		
		for (int i = 0; i < input.size(); i++) {
			if (i % 2) {
				evenSum += input[i] - '0';
			} else {
				oddSum += input[i] - '0';
			}
		}
		
		int result = abs(oddSum - evenSum);
					
		if (result % 11 == 0) {
			cout << input << " is a multiple of 11." << endl;
		} else {
			cout << input << " is not a multiple of 11." << endl;
		}
	}
	
	return 0;
}
