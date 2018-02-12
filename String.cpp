#include "String.hpp"
#include <string.h>

String::String()
{
    aString = '\0';
    size_=0;
}

String::String(const char* s) {
 size_ = strlen(s);
 aString = new char[size_ + 1];
 strcpy(aString, s) ;
}


String::~String()
{
    delete[] aString;
}

