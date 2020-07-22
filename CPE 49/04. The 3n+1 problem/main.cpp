#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int int1, int2, temp;
	
	while (cin >> int1 >> int2) {
	
		cout << int1 << " " << int2 << " ";
		
		if (int1 > int2) {
			temp = int1;
			int1 = int2;
			int2 = temp;
		}

		int now, tempLength, maxLength = 0;

		for (int i = int1; i <= int2; i++) {
			
			tempLength = 1;
			now = i;			
			
			while (now != 1) {
				if (now % 2) {
					now = 3 * now  + 1;
				} else {
					now /= 2;
				}
				
				tempLength++;
			}		
						
			if (tempLength > maxLength) {
				maxLength = tempLength;
			}
		}
		cout << maxLength << endl;
	}
	return 0;
}
