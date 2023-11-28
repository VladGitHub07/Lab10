#include <iostream>
using namespace std;
int main()
{
    double cost;
    int issuespermonth;
    cout << "Enter the cost of one number (UAH): ";
    cin >> cost;
    if (cost <= 0)
    {
        cout << "Cost of one number can't be less than 0 or be equal 0. Try positive numbers: ";
        cin >> cost;
    }
    cout << "Enter the number of issues per month: ";
    cin >> issuespermonth;
    if (issuespermonth <= 0)
    {
        cout << "Issues per month can't be less than 0 or be equal 0. Try natural numbers: ";
        cin >> issuespermonth;
    }
    double monthlycost = cost * issuespermonth;
    double yearlycost = monthlycost * 12;
    cout << "Total cost of annual subscription: " << yearlycost << " UAH";
    return 0;
}