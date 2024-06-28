#include <iostream>
using namespace std;

double determinant(double a1, double b1, double c1,
                   double a2, double b2, double c2,
                   double a3, double b3, double c3) {
    return a1 * (b2 * c3 - b3 * c2) -
           b1 * (a2 * c3 - a3 * c2) +
           c1 * (a2 * b3 - a3 * b2);
}

int main() {
    double a1, b1, c1, d1;
    double a2, b2, c2, d2;
    double a3, b3, c3, d3;

    cout << "Enter coefficients for the first equation (a1 b1 c1 d1): ";
    cin >> a1 >> b1 >> c1 >> d1;

    cout << "Enter coefficients for the second equation (a2 b2 c2 d2): ";
    cin >> a2 >> b2 >> c2 >> d2;

    cout << "Enter coefficients for the third equation (a3 b3 c3 d3): ";
    cin >> a3 >> b3 >> c3 >> d3;

    double D = determinant(a1, b1, c1, a2, b2, c2, a3, b3, c3);
    double Dx = determinant(d1, b1, c1, d2, b2, c2, d3, b3, c3);
    double Dy = determinant(a1, d1, c1, a2, d2, c2, a3, d3, c3);
    double Dz = determinant(a1, b1, d1, a2, b2, d2, a3, b3, d3);

    if (D != 0) {
        double x = Dx / D;
        double y = Dy / D;
        double z = Dz / D;
        cout << "Solution: x = " << x << ", y = " << y << ", z = " << z << endl;
    } else {
        cout << "The system of equations has no unique solution." << endl;
    }

    return 0;
}
