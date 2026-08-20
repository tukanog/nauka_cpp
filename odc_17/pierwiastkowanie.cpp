#include <iostream>
#include <cmath>

using namespace std;

float x_1, y_1, x_2, y_2, d;

int main()
{
    cout << cbrt(27) << endl;
    cout << pow(49, 0.5) << endl;
    cout << pow(27, 1.0/3.0) << endl; //ułamek musi być tak zapisany, bo inaczej będzie to dzielenie całkowite i wynik będzie równy 0

    cout << "A (x1, y1) = " << endl;
    cin >> x_1 >> y_1;
    cout << "B (x2, y2) = " << endl;
    cin >> x_2 >> y_2;

    d = sqrt(pow(x_2 - x_1, 2) + pow(y_2 - y_1, 2));
    cout << d << endl;

    return 0;
}