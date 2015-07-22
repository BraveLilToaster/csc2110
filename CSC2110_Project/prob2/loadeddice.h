#ifndef LOADEDDICE_H
#define LOADEDDICE_H

class LoadedDice:public Dice {
    public:
        LoadedDice();
        LoadedDice(int numSides);
        int rollDice() const;
    protected:
        int numSides;
};

LoadedDice::LoadedDice() {
    numSides = 6;
    srand(time(NULL));
}

LoadedDice::LoadedDice(int numSides) {
    this->numSides = numSides;
    srand(time(NULL));
}

int LoadedDice::rollDice() const {
    if(rand()%2 == 0) {
        return numSides;
    }
    else {
        return Dice::rollDice();
    }
}

int rollTwoDice(const LoadedDice& die1, const LoadedDice& die2) {

   
        return die1.rollDice() + die2.rollDice();

}

#endif
