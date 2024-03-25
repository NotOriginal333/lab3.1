#pragma once
#include <string>

using namespace std;

class Triad
{
	int hour, min, sec;
public:
	Triad();
	Triad(int, int, int);
	Triad(const Triad&);
	~Triad() { };

	Triad operator=(Triad t);

	void setHour(int h) { hour = h; };
	void setMin(int m) { min = m; };
	void setSec(int s) { sec = s; };

	int getHour() const { return this->hour; };
	int getMin() const { return this->min; };
	int getSec() const { return this->sec; };

	void incremHour();
	void incremMin();
	void incremSec();

	friend istream& operator >> (istream& in, Triad& r);
	friend ostream& operator << (ostream& out, const Triad& r);

	operator string () const;
};

