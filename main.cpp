#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// constant 
double GRAVITY = 9.8;

double DistanceFallen(int t);

int main() {
  for (int t = 1; t < 11; t++){
    double d = DistanceFallen(t);
    cout << "After " << setw(2) << t << " second(s), you will fall " << setw(6) << d << " meters." << endl;
  }
 
}

double DistanceFallen(int t) {
    cout << fixed << setprecision(2);
  double d = (0.5) * GRAVITY * (t * t);
  return d;
}
