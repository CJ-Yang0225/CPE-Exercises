#include <bits/stdc++.h>

using namespace std;

int main() {
  string input;
  int freq[256], Case = 0;
  
  while (getline(cin, input)) {
    memset(freq, 0, sizeof(freq));
    for (int i = 0; i < input.size(); i++) {
      freq[input[i]]++;
    }
    
    int c_max = 0;    
    for (int i = 0; i < 256; i++) {
      c_max = max(c_max, freq[i]);
    }
    
    if (++Case > 1) cout << endl;
    
    for (int i = 1; i <= c_max; i++) {
      for (int j = 255; j >= 0; j--) {
        if (freq[j] == i) cout << j << " " << freq[j] << endl;
      }      
    }    
  }

  return 0;
}
