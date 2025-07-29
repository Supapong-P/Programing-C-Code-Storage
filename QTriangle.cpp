#include "Triangle-tools.hpp"
using namespace std;

int main() {
    Triangle t;

    float x, y;

    cout << "Enter base of triangle: ";
    cin >> x;

    cout << "Enter height of triangle: ";
    cin >> y;

    t.setTriangle(x,y);
    t.perimeter();
    t.area();

}
