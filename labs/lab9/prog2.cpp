#include<iostream>
#include<string>
using namespace std;

int main(){
    int strlen = 256;
    char* str;

    //create dynamic array
    str = new char[strlen];

    //enter a string
    cin.get(str, strlen);


    //convert to uppercase
    for(int i=0; i<strlen; i++){
        str[i] = toupper(str[i]);
        cout << str[i];
    }
    cout << endl;
}
