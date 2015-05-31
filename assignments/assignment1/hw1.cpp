#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    /*
    double first, second;
    int temp;
    string message;

    first=2.5;
    second=4.0;
    cout << fixed << showpoint << setprecision(2);
    cout << (pow(first, second)) << endl;
    cout << (pow(second, first)) << endl;
    temp = static_cast<int> (pow(second, 1.5));
    cout << temp << endl;

    cout << sqrt(56.25) << endl;
    cout << static_cast<int> (sqrt(pow(first, temp))) << endl;
    message = "Predefined functions simplify programming code!";

    cout << "length of message = " << message.length() << endl;
    return 0;
    */
/*
    if ('K' > '%' || '@' <= '?')
        cout << "?%";
        cout << "!!";
    cout << endl;

    if ('8' < 'B' && 15 > -13)
        cout << " a b c d" << endl;
        cout << "##" << endl;

    if ( "Fly" >= "Flying" && "Programming" >= "Coding")
        cout << " a b c d" << endl;
        cout << "##" << endl;
    */
    
    /*
    int s = 0;
    int i;

    for (i = 0; i < 0; i++) {
        s = 2*s+i;
        cout << s << " ";
    }
    cout << endl;
    */

    /*
    cout << "a) " << endl;
    int count = 0;
    int x = 5, y = 50;
    do {
        x = x+10;
        count++;
    }
    while (x<y);
    cout << x << " " << y << " " << count << endl;
    
    cout << "b) " << endl;
    count = 0;
    x = 5; y = 80;
    do {
        x = x*2;
        count++;
    }
    while (x<y);
    cout << x << " " << y << " " << count << endl;
    
    cout << "c) " << endl;
    count = 0;
    x = 5; y = 20;
    do {
        x = x+2;
        count++;
    }
    while (x>=y);
    cout << x << " " << y << " " << count << endl;
    
    cout << "d) " << endl;
    count = 0;
    x = 5; y = 35;
    while (x<y) {
        x = x+10;
        count++;
    }
    cout << x << " " << y << " " << count << endl;
    
    cout << "e) " << endl;
    count = 0;
    x = 5; y = 30;
    while (x<=y) {
        x = x*2;
        count++;
    }
    cout << x << " " << y << " " << count << endl;
    
    cout << "a) " << endl;
    count = 0;
    x = 5; y = 50;
    while (x<y) {
        x = x+2;
        count++;
    }
    cout << x << " " <<  y << " " << count << endl;
    */

    int i = 0, value = 0;

    while (i <= 20) {
        if (i % 2 ==0 && i <= 10)
            value = value + i * i;
        else if (i % 2 ==0 && i > 10)
            value = value + i;
        else
            value = value - i;
        i = i+1;
    }
    cout << "value = " << value << endl;
    
    value = 0;
    for(int i = 0; i <=20; i++) {
        if (i % 2 ==0 && i <= 10)
            value = value + i * i;
        else if (i % 2 ==0 && i > 10)
            value = value + i;
        else
            value = value - i;
        
    }
    cout << "value = " << value << endl;
}
