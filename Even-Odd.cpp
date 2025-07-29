#include <iostream>
using namespace std;

int main() 
{
    cout <<"Enter your number : "  << endl;
    int n;
    cin >> n;

    if (n % 2 == 0) {
        cout << "Your number is even" << endl;
    } else {
        cout << "Your number is odd" << endl;
    }
}
