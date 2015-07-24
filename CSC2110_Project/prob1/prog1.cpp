#include<iostream>
#include<string>
#include "document.h"
#include "email.h"
#include "file.h"
using namespace std;

bool ContainsKeyword(const Document& docObject, string keyword); 

int main() {
    string docObject, keyword;
    Email e;
    File f;

    e.setSender("ME@Global.com");
    e.setRecipient("You@global.com");
    e.setTitle("hey");
    e.setText("Hi Friend."); 

    f.setPname("C://files/folder/text.txt");
    f.setText("Hi Friend."); 

    cout << ContainsKeyword(e, "Hi") << endl;
    cout << ContainsKeyword(e, "hey") << endl;

    cout << ContainsKeyword(f, "Hi") << endl;
    cout << ContainsKeyword(f, "hey") << endl;
    cout << ContainsKeyword(f, "text") << endl;
}

    bool ContainsKeyword(const Document& docObject, string keyword) {
        if(docObject.getText().find(keyword) != string::npos) 
            return true;
        return false;
    }
