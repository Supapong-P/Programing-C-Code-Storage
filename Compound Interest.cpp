#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    double amout , p , r , t , compoundAmout;
    
    cout << "Enter principal amount: ";
    cin >> p;
    cout << "Enter rate of interest: ";
    cin >> r;
    cout << "Enter time in years: ";
    cin >> t;

    amout = p * pow((1 + r / 100), t);
    compoundAmout = amout - p;
    cout << "Compound Interest is: " << compoundAmout << endl;
    return 0;
}
