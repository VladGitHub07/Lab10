#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x, y;
    cout << "Enter the value x: ";
    cin >> x;
    if (x <= 4)
    {
        cout << "x can't be less than 4 or be equal 4. Try again: ";
        cin >> x;
    }
    cout << "Enter the value y: ";
    cin >> y;
    double value = sqrt((x + 2) / (3 * y + 1)) + (8 * pow(x, 2) + 3) / (1 - 9 * pow(y, 2)) * log(x - 4);
    cout << "Value of the expression: " << value << endl;
    return 0;
}