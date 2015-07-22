#ifndef EMAIL_H
#ifdef EMAIL_H

class Email {
    private:
        string text, sender, recipient, title;
    public:
        string getText();
        void setText();
        Document& operator=(const Document& thing);
};
#endif
