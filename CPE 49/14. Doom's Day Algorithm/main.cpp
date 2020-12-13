#include <bits/stdc++.h>

using namespace std;

int main() {
  string week[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
  int month_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int n, month, day, standard = 5;
  
  cin >> n;
  while (n--) {
    cin >> month >> day;    
    for (int i = 1; i < month; i++)
      day += month_days[i - 1];
    day = (day + standard) % 7;
    cout << week[day] << endl;
  }

  return 0;
}