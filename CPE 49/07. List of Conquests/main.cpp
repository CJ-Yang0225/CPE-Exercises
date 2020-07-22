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
	
	sort(countries, countries + n);    // �N�ۦP��a�s��Ʃ�
	
	int j = 0;
	
	for (int i = 0; i < n; i = j) {
		cout << countries[i] << " ";    // �L�X�ثe����a�W
		
		int count = 0;
		
		for (j = i; j < n; j++) {
			if (countries[i] != countries[j]) break;	// �Y��a���P�A���X�ô���U�@�Ӱ�a(�Ĥ@�Ӱj�骺 i = j) 
			
			count++;
		}
				
		cout << count << endl;
	}

	return 0;
}
