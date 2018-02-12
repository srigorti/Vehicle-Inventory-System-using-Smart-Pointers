

#include <iostream>
#include <stdio.h>

using namespace std;

#include <String.cpp>
#ifndef CAR_HPP
#define CAR_HPP

class car
{
private:
    int id;
    int year;
    String name_;
    
public:
    car();
    car(int data, int flag);
   // car(int data, int flag, char* aString);
    void printCarDetails();
    ~car();

};

#endif // CAR_HPP
