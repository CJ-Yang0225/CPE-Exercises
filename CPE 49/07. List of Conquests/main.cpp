#include <bits/stdc++.h>

using namespace std;

int main() {
  int input, count;
  
  cin >> input;
  cin.ignore(); // 過濾輸入Enter問題
  
  string countries[input], name;

  for (int i = 0; i < input; i++) {  	
    cin >> countries[i];
    getline(cin, name);    
  }
  
  sort(countries, countries + input); // 將相同國家連續排放
  
  int j;
  for (int i = 0; i < input; i = j) {
    cout << countries[i] << " "; // 印出目前的國家名
    count = 0;    
    for (j = i; j < input; j++) {
      // 若國家不同，跳出並換到下一個國家(第一個迴圈的 i = j)
      if (countries[i] != countries[j]) break;
      count++;
    }
    cout << count << endl;
  }
  
  return 0;
}

int main() {
  map<string, int> countries;
  int n;
  cin >> n;
  cin.ignore();
  
  while (n--) {
    string name, others;
    cin >> name;
    countries[name]++;
    getline(cin, others);
  }
  
  // 遍歷 Map 裡的 Key & Value
  for (auto iter = countries.begin(); iter != countries.end(); iter++) {
    cout << iter -> first << " " << iter -> second << endl;
  }
}