
#ifndef SONGS_H_
#define SONGS_H_
#include "Singer.h"
#include <string>
using std:: string;
class Songs {
public:
	Songs();
	Songs(string, Singer&singer, string, int);

	virtual ~Songs();
	const string& getGenre() const;
	void setGenre(const string& genre);
	const string& getName() const;
	void setName(const string& name);
	const Singer& getSinger() const;
	void setSinger(const Singer& singer);
	int getYear() const;
	void setYear(int year);
	virtual void print();
private:
	string name;
	Singer singer;
	string genre;
	int year;
};

#endif /* SONGS_H_ */
