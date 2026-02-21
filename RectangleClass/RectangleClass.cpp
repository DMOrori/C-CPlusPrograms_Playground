#include <iostream>
using namespace std;

class Rectangle
{
private:
    double length;
    double width;

public:
    Rectangle()
    {
        length = 1.0;
        width = 1.0;
    }

    Rectangle(double l, double w)
    {
        length = l;
        width = w;
    }

    double Area()
    {
        return length * width;
    }
};

int main()
{
    Rectangle X(3, 4);

    Rectangle Y(7, 5);

    cout << "Area of Rectangle X: " << X.Area() << endl;
    cout << "Area of Rectangle Y: " << Y.Area() << endl;

    return 0;
}