#include <iostream>
using namespace std;
/*
int test(int x, int y);

int main(){
    cout << test(3,100) << endl;
    cout << test(15,7) << endl;
}

int test(int x, int y) {
    if(x<=y)
        return y -x;
    else
        return test(x-1,y+1);
}

*/

void recFun(int x,int y);

int main() {
    recFun(180,38);
    cout << endl;
    recFun(75,26);
    cout << endl;
    recFun(13,86);
    cout << endl;
    recFun(56,148);
    cout << endl;
}

void recFun(int x,int y) {
    if (x>0 && y>0) {
        if(x>=y && y!=0) {
            cout <<x%y<< " ";
            recFun(x-y,y);
        }
        else if (y > x && x!=0) {
            cout << y%x << " ";
            recFun(y-x,x);
        }
        else
            cout << x+y << endl;
    
    }

}
