#include <iostream>
using namespace std;


int power(int b, int p);
int main() {
    int base, pow;
    cout << "enter a base and power" << endl;
    cin>>base>>pow;
    cout << power(base,pow);
}

//Recurive addition function
int power(int b, int p) {
    //Base Case
    if(p==1) {
        return b;
    }

    //recursive Case
    else {
        b = b * power(b,p-1);

    }
}
