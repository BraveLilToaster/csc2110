#ifndef EMAIL_H
#define EMAIL_H
#include<iostream>
#include<string>
using namespace std;

class Email: public Document {
    private:
        string sender, recipient, title;
    public:
        string getSender();
        void setSender(string s);
        string getRecipient();
        void setRecipient(string r);
        string getTitle();
        void setTitle(string ti);
        Email& operator=(const Email& thing);
};

string Email::getSender() {
    return sender;
}

void Email::setSender(string s) {
    sender = s;
}

string Email::getRecipient() {
    return recipient;
}

void Email::setRecipient(string r) {
    recipient = r;
}


string Email::getTitle() {
    return title;
}

void Email::setTitle(string ti) {
    title = ti;
}

Email& Email::operator=(const Email& thing) {
    sender = thing.sender;
    recipient = thing.recipient;
    title = thing.title;
    return *this;
}

#endif
