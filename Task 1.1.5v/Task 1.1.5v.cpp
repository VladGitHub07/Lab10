#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.1415926535;
int main()
{
    double r, h, costperliter;
    cout << "Enter tank radius (meters): ";
    cin >> r;
    if (r <= 0)
    {
        cout << "Radius can't be less than 0 or be equal 0. Try positive numbers: ";
        cin >> r;
    }
    cout << "Enter the height of the tank (meters): ";
    cin >> h;
    if (h <= 0)
    {
        cout << "Height can't be less than 0 or be equal 0. Try positive numbers: ";
        cin >> h;
    }
    cout << "Enter the cost of one liter of fuel (UAH): ";
    cin >> costperliter;
    if (costperliter <= 0)
    {
        cout << "Cost per liter can't be less than 0 or be equal 0. Try positive numbers: ";
        cin >> costperliter;
    }
    double totalcost = PI * pow(r, 2) * h * costperliter;
    cout << "The total cost of fuel: " << totalcost << " UAH";
    return 0;
}