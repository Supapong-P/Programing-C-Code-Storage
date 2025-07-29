#include <iostream>
using namespace std;

int main()
{
    int num[3];
    cout << "Enter three numbers: ";
    cin >> num[0] >> num[1] >> num[2];
    int max = num[0];

    for (int i = 1; i < 3; i++) 
    {
        if (num[i] > max) 
        {
            max = num[i];
        }
    }
    cout << "The maximum number is: " << max << endl;
}
