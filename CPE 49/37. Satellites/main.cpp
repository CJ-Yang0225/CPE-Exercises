#include <bits/stdc++.h>

using namespace std;

// or #define _USE_MATH_DEFINES 定義的 M_PI
#define PI acos(0.0) * 2.0  // acos(0) = PI / 2 -> PI = 2 * acos(0)

int main() {
  double s, a;
  string unit;
  double r = 6440.0;  // 地球半徑
  
  while (cin >> s >> a >> unit) {
    if (unit == "min") a /= 60.0;
    if (a > 180.0) a = 360.0 - a;
    
    double rad = a * (PI / 180.0);  // 角度 degree -> 弧度 radius
    double arc = (r + s) * rad;  // 弧長
    double chord = 2.0 * (r + s) * sin(rad / 2.0);  // 弦長
    
    // 顯示小數點後6位
    cout << fixed << setprecision(6) << arc << " " << chord << endl;
  }
}