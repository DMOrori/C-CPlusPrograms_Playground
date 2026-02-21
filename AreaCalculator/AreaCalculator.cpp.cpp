/* Task 3: Rectangle Area with Function Calls
   Language: C++
   Author: Thomas
*/

#include <iostream>
#include <iomanip> // Necessary for setting decimal places

using namespace std;

// i) getDimensions: Prompts user and takes arguments by reference
void getDimensions(double &length, double &width) {
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
}

// ii) calculateArea: Takes length and width as arguments and returns area
double calculateArea(double length, double width) {
    return length * width;
}

int main() {
    double l, w, area;

    // b) Call getDimensions to get input from the user
    getDimensions(l, w);

    // b) Call calculateArea to compute the result
    area = calculateArea(l, w);

    // c) Display the area in main() formatted to 2 decimal places
    cout << fixed << setprecision(2); 
    cout << "\nThe calculated area of the rectangle is: " << area << endl;

    return 0;
}