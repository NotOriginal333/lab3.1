#pragma once
#include "Triad.h"
#include <string>
#include <sstream>

class Time : public Triad
{
	Triad triad;
public:
	Time();
	Time(Triad);
	Time(const Time&);
	~Time() { };

	Triad getTriad() { return triad; };

	void setTriad(Triad t) { triad = t; };
	void incremHour();
	void incremMin();
	void incremSec();

	friend Time operator+(Time r, int n);
	friend Time operator*(Time r, int n);

	Time operator=(Time t);

	friend ostream& operator << (ostream& out, const Time& r);
	friend istream& operator >> (istream& in, Time& r);

	operator std::string() const;
};