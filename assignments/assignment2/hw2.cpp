#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int x;

void summer(int&, int);
void fall(int, int&);

int main() {
    int num1 = 2;
    int num2 = 5;
    x = 6;

    summer(num1, num2);
    cout << num1 << " " << num2 << " " << x << endl;

    fall(num1, num2);
    cout << num1 << " " << num2 << " " << x << endl;
    return 0;
}

void summer(int& a, int b) {
    int num1;
    num1 = b +5;
    a = 2 * b + 5;
    b = num1 + 4;
}

void fall(int u, int& v) {
    int num2;
    num2 = x;
    v = num2 * 4;
    x = u - v;
}
