
#include "Singer.h"
#include "Songs.h"
#include <iostream>
using namespace std;
/*Songs::Songs():Singer() {
	setName("");
	setGenre("");
	setYear(1990);
}*/
Songs::Songs(string name, Singer&singer, string genre, int year):singer(singer){
	setName(name);
	setGenre(genre);
	setYear(year);
}
Songs::~Songs() {
	// TODO Auto-generated destructor stub
}

const string& Songs::getGenre() const {
	return genre;
}

void Songs::setGenre(const string& genre) {
	this->genre = genre;
}

const string& Songs::getName() const {
	return name;
}

void Songs::setName(const string& name) {
	this->name = name;
}

const Singer& Songs::getSinger() const {
	return singer;
}

void Songs::setSinger(const Singer& singer) {
	this->singer = singer;
}

int Songs::getYear() const {
	return year;
}

void Songs::setYear(int year) {
	this->year = year;
}

void Songs::print() {
	singer.print();
	cout << getName() << ", " << getGenre() << ", " << getYear();
}
