#include "car.hpp"


car::car()
{
    id = 0;
    year = 0;
    name_=NULL;
    
}

car :: car(int data, int flag){
    this->id= data;
    this->year = flag;
    }

//car :: car(int data, int flag, char* aString) : name_(aString){
//    this->id = data;
//    this->year = flag;
//    
//    }

//
//void car::readCarItem(int data, int year1){
//    
//    this->id = data;
//    this->year = year1;
//    }


void car::printCarDetails(){
    cout << "ID:" << id << "year:" << year;
    }

car::~car()
{
}

