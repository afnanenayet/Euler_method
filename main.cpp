#include <iostream>
#include <cmath>

using namespace std;

int main() {
	float dy_dx;
	float y1;
	float y0;
	float x;
	float delta_x;
	float add_y;
	float increment;
	float x_lim;
	cout << "Type in x:  " << endl;
	cin >> x;
	cout << "Type in y: ";
	cin >> y0;
	cout << endl << "Step size: ";
	cin >> delta_x;
	cout << endl << "Estimate to (x-value): ";
	cin >> x_lim;
	cout << endl << "increment: " << increment;
	return 0;
}

float find_derivative(float x, float y) {
	float dydx;
	dydx = x + y;
	return dydx;
}
