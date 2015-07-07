#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

/*
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
*/

/*
void prog(int num1, int num2 =7, double z =2.5){
    int num3 = 3;
    num1 =num1 + static_cast<int>(z);
    z = num2 + num1 * z;
    num3 = num2 - num1;
    cout << "num3 = " << num3 << endl;
}

int main(){
    prog(7);
    prog(8,2);
    prog(0,1,7.5);
    prog(1,2,3.0);

}
*/

/*
int main() {
    string str = "Now is the time for the party! " ;
    cout << str.size() << endl;
    cout << str.substr(7,8) << endl;
    string::size_type ind = str.find( 'f' ) ;
    string s = str.substr(ind + 4 , 9) ;
    cout << s << endl ;
    cout<< str.insert(11 , "best " ) << endl ;
    str.erase(16 , 14) ;
    str.insert(16 , "to study for the exam? " ) ;
    cout<< str << endl ;
}
*/
int main() {

char name[8] = "Shelly" ;
cout<< name ;
/*
for (int j = 0 ; j < 6 ; j++) {
    cout << name[j] ;
}
*/
int j = 0 ;
while (name[j] != '\0' ) {
    cout << name[j++] ;
}

j = 0 ;
while ( j < 8) {
    cout << name[j++] ; 
}
}
