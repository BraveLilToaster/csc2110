#ifndef DOCUMENT_H
#define DOCUMENT_H
#include<iostream>
#include<string>
using namespace std;

class Document {
    private:
        string text;
    public:
        string getText() const;
        void setText(string t);
        Document& operator=(const Document& thing);
};

string Document::Document::getText() const {
    return text;
}

void Document::Document::setText(string t) {
    text = t;
}

Document& Document::operator=(const Document& thing) {
    text = thing.text;    
    return *this;
}

#endif
