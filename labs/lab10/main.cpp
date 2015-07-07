#include <iostream>
#include <cstring>

using namespace std;

void reverse(char*);

int main() {
    //odd numbered string
    char str[6] = "Hello";
    reverse(str);
    cout << str << endl;
    //even numbered string
    char str1[5] = "love";
    reverse(str1);
    cout << str1 << endl;

}

void reverse(char* s) {
    char* front = &s[0];
    char* rear = &s[strlen(s) - 1];
    char temp;

    
    while(front <= rear){

        //swap the chars
        temp = *front;
        *front = *rear;
        *rear = temp;

        front++;
        rear--;
    }
    

}
