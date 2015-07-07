#include<iostream>
using namespace std;

class classA {
    public:
        virtual void print() const;
        void doubleNum();
        classA(int a = 0);
    private:
        int x;
};

void classA::print() const {
    cout << "ClassA x: " << x << endl;
}

void classA::doubleNum() {
    x = 2 * x;
}

classA::classA(int a) {
    x = a;
}

class classB: public classA {
    public:
        void print() const;
        void doubleNum();
        classB(int a = 0, int b = 0);
    private:
        int y;
};

void classB::print() const {
    cout << "ClassB y: " << y << endl;
}

void classB::doubleNum() {
    y = 2 * y;
}

classB::classB(int a, int b
        ):classA(a) {
    y = b;
}

int main() {

    /*
    int num;
    int* ptr1;
    int* ptr2;
    double *ptr;

    ptr1 = ptr2;

    num = ptr1;

    ptr3 = ptr1;

    *ptr3  = *ptr2;

    *ptr1 = *ptr2;

    num = *ptr2;

    ptr1 = &ptr2;

    ptr1 = &num;

    num = &ptr1;
    */

    /*
    int *length;
    int  *width;
    length = new int;
    *length = 5;
    width = length;
    length = new int;
    *length = 2 * (*width);
    cout << *length << " " << *width << " " << (*length) * (*width) << endl;
    */

    /*
    int *p = new int;
    int *q = new int;
    *p = 32;
    *q = 20;
    cout << 2 * (*p) << " " << (*q -5) << endl;
    p = q;
    *p = 10;
    cout << *p << " " << *q << endl;
    p = new int;
    *p = 12;
    *q = 62;
    cout << *p << " " << *q << endl;
    */

    /*
    int *p;
    int *q = new int;
    p = q;
    *q = 75;
    delete p;
    p = new int;
    *p = 62;
    q = new int;
    q = p;
    *q = 26;
    cout << *p << " " << *q << endl;
    */

    /*
    int num;
    int *listPtr;
    int *temp;
    listPtr = new int[5];
    num = 8;
    temp = listPtr;
    for (int j=0; j<5; j++){
        *listPtr = num;
        num = num +2;
        listPtr++;
    }

    listPtr = temp;

    for(int k=0; k<5; k++) {
        *temp = *temp + 3;
        temp++;

    }
    for(int k=0; k<5; k++) {
        cout << *listPtr << " ";
        listPtr++;
    }
    cout << endl;
    */

    classA *ptrA;
    classA objectA(2);

    classB objectB(3,5);

    ptrA = &objectA;
    ptrA->doubleNum();
    ptrA->print();
    cout << endl;

    ptrA = &objectB;

    ptrA->doubleNum();
    ptrA->print();
    cout << endl;
    return 0;

}
