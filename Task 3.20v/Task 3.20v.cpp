#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double m, n;
    cout << "Enter the value m: ";
    cin >> m;
    cout << "Enter the value n: ";
    cin >> n;
    double z1 = ((m - 1) * sqrt(m) - (n - 1) * sqrt(n)) / (sqrt(pow(m, 3) * n) + n * m + pow(m, 2) - m);
    double z2 = (sqrt(m) - sqrt(n)) / m;
    cout << "z1: " << z1 << endl;
    cout << "z2: " << z2 << endl;
    return 0;
}