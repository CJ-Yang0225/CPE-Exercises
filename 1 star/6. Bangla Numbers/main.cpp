#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void bangla_numbers(long long n) {
	if (n / 10000000) {
		bangla_numbers(n / 10000000);	
		cout << " kuti ";
		n %= 10000000;
	}
	
	if (n / 100000) {
		bangla_numbers(n / 100000);
		cout << " lakh ";
		n %= 100000;
	}
	
	if (n / 1000) {
		bangla_numbers(n / 1000);
		cout << " hajar ";
		n %= 1000;
	}
	
	if (n / 100) {
		bangla_numbers(n / 100);
		cout << " shata ";
		n %= 100;
	} 
	
	if (n) {
		cout << n;				
	}
}

int main() {
	long long int input;	
	int times = 0;
	
	while (cin >> input) {
		if (input == 0) cout << "0";
		cout << setw(4) << ++times << ". ";
		bangla_numbers(input);
		cout << endl;		
	}

	return 0;
}