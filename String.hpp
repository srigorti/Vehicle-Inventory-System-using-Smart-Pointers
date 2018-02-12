#ifndef STRING_HPP
#define STRING_HPP

class String
{
    
private:
    char* aString;
    short size_;
public:
    String();
    String(const char*);
    ~String();

};

#endif // STRING_HPP
