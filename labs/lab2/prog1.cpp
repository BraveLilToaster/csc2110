#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main() {

        double ticketPrice, numberOfTicketsSold, boxPrice, boxTicketsSold, sidePrice, sideTicketsSold, premPrice, premTicketsSold, gaPrice, gaTicketsSold;

        ifstream infile;

        infile.open("data.txt");

        infile >> boxPrice >> boxTicketsSold;
        infile >> sidePrice >> sideTicketsSold;
        infile >> premPrice >> premTicketsSold;
        infile >> gaPrice >>  gaTicketsSold;

        numberOfTicketsSold = boxTicketsSold + sideTicketsSold + premTicketsSold + gaTicketsSold;
        ticketPrice = (boxPrice * boxTicketsSold) + (sidePrice * sideTicketsSold) + (premPrice * premTicketsSold)+ (gaPrice * gaTicketsSold);

        cout << numberOfTicketsSold << showpoint << fixed << setprecision(2) << " $" << ticketPrice << endl;

        infile.close();
        
        return 0;

}
