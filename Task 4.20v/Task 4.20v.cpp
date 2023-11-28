#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    const int a = 2;
    double p;
    cout << "Enter the value p: ";
    cin >> p;
    double x = exp(sqrt(p + a));
    double t = pow(p, 3) + pow(a, 3);
    double y = pow(x, 3) / pow(t, 2);
    cout << "Calculation result: " << y << endl;
    return 0;
}