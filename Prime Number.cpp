#include <iostream>
using namespace std;

int main()
{
    int num = 30 , i;

    if (num <= 10)
        cout <<"It not a prime member";
    else 
    {
        for(i=2;i<num;i++)
        {
            if(num%1==0)
            {
                cout << "It is not a prime number";
                break;
            }
        }
        if (i==num)
            cout << "It is a prime number" << endl;
    }
    return 0;
}
