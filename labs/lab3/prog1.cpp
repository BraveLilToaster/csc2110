#include <iostream>
#include <string>
using namespace std;

void convertNumber();

int main() {
    convertNumber();

}

void convertNumber() {
    string phoneNumber;
    cout << "Enter a phone Number to be converted to text: ";
    cin >> phoneNumber;
    for(int i = 0; i < 7; i ++) {
        char c = phoneNumber[i];
        switch(c) {
            case 'a' :
            case 'A' :
            case 'b' :
            case 'B' :
            case 'c' :
            case 'C' :
                cout << "2";
                break;
            case 'd' :
            case 'D' :
            case 'e' :
            case 'E' :
            case 'f' :
            case 'F' :
                cout << "3";
                break;
            case 'g' :
            case 'G' :
            case 'h' :
            case 'H' :
            case 'i' :
            case 'I' :
                cout << "4";
                break;
            case 'j' :
            case 'J' :
            case 'k':
            case 'K' :
            case 'l' :
            case 'L' :
                cout << "5";
                break;
            case 'm' :
            case 'M' :
            case 'n' :
            case 'N' :
            case 'o' :
            case 'O' :
                cout << "6";
                break;
            case 'p' :
            case 'P' :
            case 'q' :
            case 'Q' :
            case 'r' :
            case 'R' :
            case 's' :
            case 'S' :
                cout << "7";
                break;
            case 't' :
            case 'T' :
            case 'u' :
            case 'U' :
            case 'v' :
            case 'V' :
                cout << "8";
                break;
            case 'w' :
            case 'W' :
            case 'x' :
            case 'X' :
            case 'y' :
            case 'Y' :
            case 'z' :
            case 'Z' :
                cout << "9";
                break;
        }
    }
        cout << endl;
}
