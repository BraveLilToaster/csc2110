#include "coord.hpp"

int main(){
    coord cart;
    cart.input(3.6, 4.3);
    cart.display();
    cart.convertToCartesian(5.5, 9.9);
    cart.display();
return 0;
}
