#include <iostream>
using namespace std;

int sumR(int arr[], int sum, int l);

int main() {
    int arr[]= {1,2,3,4,5,6,7,8,9};
    cout << "the sum of all numbers in the array is "<< sumR(arr,0,8) << endl;
}

//Recurive addition function
int sumR(int arr[], int sum, int l) {
    //Base Case
    if(l<0) {
        return sum;
    }

    //recursive Case
    else {
        sum += arr[l];
        return sumR(arr,sum,--l);
    }
}
