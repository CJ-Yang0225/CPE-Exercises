#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int n;
	
	cin >> n;
	
	string countries[n];
	string name;
	
	
	for (int i = 0; i < n; i++) {
		cin >> countries[i];
		getline(cin, name);
	}
	
	sort(countries, countries + n);    // 將相同國家連續排放
	
	int j = 0;
	
	for (int i = 0; i < n; i = j) {
		cout << countries[i] << " ";    // 印出目前的國家名
		
		int count = 0;
		
		for (j = i; j < n; j++) {
			if (countries[i] != countries[j]) break;	// 若國家不同，跳出並換到下一個國家(第一個迴圈的 i = j) 
			
			count++;
		}
				
		cout << count << endl;
	}

	return 0;
}
