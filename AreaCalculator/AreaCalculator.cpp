
#include <iostream>
#include <iomanip>

using namespace std;

void getDimensions(double &length, double &width)
{
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
}

double calculateArea(double length, double width)
{
    return length * width;
}

int main()
{
    double l, w, area;

    getDimensions(l, w);

    area = calculateArea(l, w);

    cout << fixed << setprecision(2);
    cout << "\nThe calculated area of the rectangle is: " << area << endl;

    return 0;
}