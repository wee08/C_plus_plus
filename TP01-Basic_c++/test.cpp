#include <iostream>
#include <complex>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    double delta = b*b - 4*a*c;

    complex<double> sqrtDelta = sqrt(complex<double>(delta, 0));
    complex<double> x1 = (-b + sqrtDelta) / (2.0 * a);
    complex<double> x2 = (-b - sqrtDelta) / (2.0 * a);

    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;

    return 0;
}