

#include "Singer.h"
#include <string>
#include <iostream>
using namespace std;


Singer::Singer(string firstName, string lastName, string alias, int rate) {
	setFirstName(firstName);
	setLastName(lastName);
	setAlias (alias);
	setRate (rate);
}

const string& Singer::getAlias() const {
	return alias;
}

void Singer::setAlias(const string& alias) {
	this -> alias = alias;
}

const string& Singer::getFirstName() const {
	return firstName;
}

void Singer::setFirstName(const string& firstName) {
	this -> firstName = firstName;
}

const string& Singer::getLastName() const {
	return lastName;
}

void Singer::setLastName(const string& lastName) {
	this -> lastName = lastName;
}

int Singer::getRate() const {
	return rate;
}

void Singer::setRate(int rate) {
	this -> rate = rate;
}

void Singer::print(){
	cout << getFirstName() << " " << getLastName () << ", " << getAlias() << " "<< getRate() << endl;
}
Singer::~Singer() {
}
