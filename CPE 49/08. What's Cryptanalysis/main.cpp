#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>

using namespace std;

int main() {
	int n;	
	int count[26] = {0};	// 初始化 ，清空內容 
	string input;
	
	cin >> n;
	cin.ignore();	// 忽略緩衝區的資料(沒加時，input讀取會問題 ) 
	
	while (n--) {
		getline(cin, input);
		
		for (int i = 0; i < input.size(); i++) {
			if (isalpha(input[i]))
				count[toupper(input[i]) - 'A']++;	// input[i] 若為字母，則轉為大寫，並將字母對應位置的值 + 1 
		}
	}
	
	int maxCount = 0;
	
	for (int i = 0; i < 26; i++) {
		if (count[i] > maxCount) maxCount = count[i];
	}
	
	for (int i = maxCount; i > 0; i--) {		
		for (int j = 0; j < 26; j++) {
			if (count[j] == i) 
				cout << char(j + 'A') << " " << count[j] << endl;	// 次數由大到小，依序顯示對應的字母和次數 
		}		
	}

	return 0;
}
