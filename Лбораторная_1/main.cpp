#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float x, y, R, S;
    cout << "input x: ";
    cin >> x;
    cout << "input y: ";
    cin >> y;
    R = 1 / tan(M_PI * x / y);
    S = cbrt(x + log(1 / x));
    cout << "Max: " << max(R, S) << "\n";
    return 0;
}
