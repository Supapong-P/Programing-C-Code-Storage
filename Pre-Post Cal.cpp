#include <iostream>
using namespace std;

int main ()
{
int x = 10;

cout <<"x pre-increment is =" << ++x << '\n';
x--;
cout <<"x post-increment is =" << x++ << '\n';
x--;

cout <<"x pre-decrement is =" << --x << '\n';
x++;
cout <<"x post-decrement is =" << x-- << '\n';
x++;

return 0;
}
