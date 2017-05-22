
#ifndef SINGER_H_
#define SINGER_H_
#include <string>
using std :: string;
class Singer {
public:
	Singer();
	Singer(string firstName, string lastName, string alias,int rate);

	virtual ~Singer();
	const string& getAlias() const;
	void setAlias(const string& alias);
	const string& getFirstName() const;
	void setFirstName(const string& firstName);
	const string& getLastName() const;
	void setLastName(const string& lastName);
	int getRate() const;
	void setRate(int rate);

	virtual void print();

private:
	string firstName;
	string lastName;
	string alias;
	int rate;
};

#endif /* SINGER_H_ */
