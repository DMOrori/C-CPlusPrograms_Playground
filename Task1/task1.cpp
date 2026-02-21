#include <iostream>
using namespace std;

class Rectangle
{
private:
    double length;
    double width;

public:
    // 1. Default Constructor
    Rectangle()
    {
        length = 1.0;
        width = 1.0;
    }

    // 2. Parameterized Constructor
    Rectangle(double l, double w)
    {
        length = l;
        width = w;
    }

    // Method to determine the area
    double Area()
    {
        return length * width;
    }
};

int main()
{
    // Initializing object X (3, 4) using parameterized constructor
    Rectangle X(3, 4);

    // Initializing object Y (7, 5) using parameterized constructor
    Rectangle Y(7, 5);

    // Output the results
    cout << "Area of Rectangle X: " << X.Area() << endl;
    cout << "Area of Rectangle Y: " << Y.Area() << endl;

    return 0;
}