#include <iostream>
using namespace std;

int main(){
    petType *pet;
    dogType *dog;
    dog = new dogType("Tommy", "German Shepherd");
    dog->setBreed("Siberian Husky ");
    pet->print();

}
