#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double x1,x2,y1,y2,m,b;
	
	cout << "Enter a coordinated sepearted by a space: ";
	cin >> x1 >> y1;

	cout << "Enter a second coordinated sepearted by a space: ";
	cin >> x2 >> y2;
	cout << endl;

	if (x1 == x2) {
		cout << "y = " << x1 << endl;
		cout << "Slope is VERTICAL." << endl;
		
	}

	else {
		m = (y2 - y1) / (x2 - x1);
		b = y1 - m*x1;

		if(m == 0) {
			cout << "y = " << m << " " << x1 << " + " << b << endl;
			cout << "Slope is HORIZONTAL." << endl;
		}
		if(m > 0) {
			cout << "y = " << m << " " << x1 << " + " << b << endl;
			cout << "Slope is INCREASING." << endl;
		}
		else {
			cout << "y = " << m << " " << x1 << " + " << b << endl;
			cout << "Slope is DECREASING." << endl;

		}
	}
}
