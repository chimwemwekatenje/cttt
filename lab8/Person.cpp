#include "Person.h"
#include<iostream>

Person::Person(){
    mWeight;
    mFirstName;
    mAge;
}
Person::Person(float newWeight){
    mWeight = newWeight;
}
Person::~Person(){

}
Person::Person(const string& FirstName, float newWeight){
    mFirstName= FirstName;
    mWeight = newWeight;
    mAge =0;
}
float Person::operator +(const Person& otherPerson) const {
    return mWeight + otherPerson.mWeight;
}