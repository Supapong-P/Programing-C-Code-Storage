#include <iostream>
#include <cmath>
class Triangle {
	float base, height;
	
    public:
	void setTriangle(float b, float h){
		base = b;
		height = h;
	}
	
    public:
	void perimeter() {
		float c;
		c = std::sqrt((base*base)+(height*height));
		std::cout << "Perimeter of triangle = "<< (base + height + c) << std::endl;
	}
	
    public:
	void area() {
        float area;
        area = (base * height) / 2;
        std::cout << "Area of triangle = " << area << std::endl;
	}
};


class Rectangle {
    double length, width;
    
    public:
    void setRectangle(double l, double w) {
        length = l;
        width = w;
    }
    
    public:
    void perimeter() {
        std::cout << "Perimeter of rectangle = " << 2 * (length + width) << std::endl;
    }
    
    public:
    void area() {
        std::cout << "Area of rectangle = " << length * width << std::endl;
    }
};
