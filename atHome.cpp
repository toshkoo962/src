//============================================================================
// Name        : atHome.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Singer.h"
#include "Songs.h"
#include <vector>
#include <iostream>
using namespace std;
vector<Songs>otherSongs;
int main() {

	vector<Songs*>otherSongs;
	Singer si1("Breaking", "Bad", "BrBd",12);
	Singer si2("Kalina", "Todorova", "Kali", 11);

	Songs s01("BRUUUM",si1, "Rock", 2016);
	Songs s02("GRUM", si1, "House", 2016);
	Songs s03("Dream", si2, "Pop", 2016);
	s01.print();
	s02.print();
	s03.print();
	return 0;
}
