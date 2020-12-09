#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>

using namespace std;

int main() {
  int n;  
  int count[26] = {0};
  string input;
  
  cin >> n;
  cin.ignore(256, '\n');
  
  while (n--) {
    getline(cin, input);
    
    for (int i = 0; i < input.size(); i++) {
      if (isalpha(input[i]))
        count[toupper(input[i]) - 'A']++;
    }
  }
  
  int maxCount = 0;
  
  for (int i = 0; i < 26; i++) {
    if (count[i] > maxCount) maxCount = count[i];
  }
  
  for (int i = maxCount; i > 0; i--) {
    for (int j = 0; j < 26; j++) {
      if (count[j] == i) 
        cout << char(j + 'A') << " " << count[j] << endl;
    }
  }

  return 0;
}

/* 利用 Map 硬寫 (因為 Map 貌似無法直接對 value 做排序，所以透過 Vector 實現) */
// #include <bits/stdc++.h>

// using namespace std;

// typedef pair<char, int> MyPair;

// bool my_compare(const MyPair &p1, const MyPair &p2){
//   return p1.second > p2.second ? true : p1.second == p2.second ? p1.first < p2.first : false;
// }

// int main() {
//   map<char, int> alphabets;
//   vector<MyPair> vec;
//   int n;
//   string str;
  
//   cin >> n;
//   cin.ignore(1000, '\n');
//   while (n--) {    
//     getline(cin, str);    
//     for (int i = 0; i < str.size(); i++) {      
//       if (isalpha(str[i])) alphabets[toupper(str[i])]++;      
//     }
//   }
//   for (auto iter = alphabets.begin(); iter != alphabets.end(); iter++) {
//     vec.push_back(make_pair(iter -> first, iter -> second));
//   }
  
//   sort(vec.begin(), vec.end(), my_compare);
  
//   for (auto iter = vec.begin(); iter != vec.end(); iter++) {
//     cout << iter -> first << " " << iter -> second << endl; 
//   }

//   return 0;
// }