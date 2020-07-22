#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>

using namespace std;

int main() {
	int n;	
	int count[26] = {0};	// ��l�� �A�M�Ť��e 
	string input;
	
	cin >> n;
	cin.ignore();	// �����w�İϪ����(�S�[�ɡAinputŪ���|���D ) 
	
	while (n--) {
		getline(cin, input);
		
		for (int i = 0; i < input.size(); i++) {
			if (isalpha(input[i]))
				count[toupper(input[i]) - 'A']++;	// input[i] �Y���r���A�h�ର�j�g�A�ñN�r��������m���� + 1 
		}
	}
	
	int maxCount = 0;
	
	for (int i = 0; i < 26; i++) {
		if (count[i] > maxCount) maxCount = count[i];
	}
	
	for (int i = maxCount; i > 0; i--) {		
		for (int j = 0; j < 26; j++) {
			if (count[j] == i) 
				cout << char(j + 'A') << " " << count[j] << endl;	// ���ƥѤj��p�A�̧���ܹ������r���M���� 
		}		
	}

	return 0;
}
