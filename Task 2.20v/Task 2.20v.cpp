#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double xA = 0, yA = 0;
    double xB = 20, yB = 20 - 1;
    double xC = -20, yC = 20 + 1;
    double a = sqrt(pow(xB - xC, 2) + pow(yB - yC, 2));
    double b = sqrt(pow(xA - xC, 2) + pow(yA - yC, 2));
    double c = sqrt(pow(xA - xB, 2) + pow(yA - yB, 2)); // a=CB b=CA c=BA
    double m_c = 0.5 * sqrt(2 * pow(a, 2) + 2 * pow(b, 2) - pow(c, 2)); // Median from top C (m_c)
    double S = 0.25 * sqrt((a + b + c) * (-a + b + c) * (a - b + c) * (a + b - c)); // An equivalent version of Heron's formula
    double R = (a * b * c) / (4 * S); // Radius of the described circle (R)
    cout << "Median from the top C: " << m_c << endl;
    cout << "Radius of the described circle: " << R;
    return 0;
}