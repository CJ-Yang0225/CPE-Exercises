#include <bits/stdc++.h>

using namespace std;

int main() {
  string sentences[100] = {""};
  int rowLength = 0, colLength = 0;
  
  while (getline(cin, sentences[rowLength])) {    
    colLength = max(colLength, (int)sentences[rowLength].length());    
    rowLength++;
  }
  
  for (int i = 0; i < colLength; i++) {
    int spaces = 0;
    for (int j = rowLength - 1; j >= 0; j--) {
      // 重要：否則 PRESENTATION-ERROR 
      if (i >= sentences[j].length()) {
        spaces++;
      } else {
        while (spaces) {
          cout << " ";
          spaces--;
        }
        cout << sentences[j][i];
      }      
    }
    cout << endl;
  }
  
  return 0;
}

/* Character Array 測試 */
// int main() {
//   char sentences[100][101] = {""};
//   int rowLength = 0, colLength = 0;
  
//   while (cin.getline(sentences[rowLength], 101)) {
//     colLength = max(colLength, (int)strlen(sentences[rowLength]));    
//     rowLength++;
//   }
  
//   for (int i = 0; i < colLength; i++) {
//     int spaces = 0;
//     for (int j = rowLength - 1; j >= 0; j--) {
//       if (i >= strlen(sentences[j])) {
//         spaces++;
//       } else {
//         while (spaces) {
//           cout << ' ';
//           spaces--;
//         }
//         cout << sentences[j][i];
//       }      
//     }
//     cout << endl;
//   }
  
//   return 0;
// }