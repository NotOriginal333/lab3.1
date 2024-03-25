#include "Time.h"
#include <iostream>
#include <sstream>

using namespace std;

Time Time::operator=(Time t) {
    triad = t.triad;
    return *this;
}

Time::Time() {
    setHour(0);
    setMin(0);
    setSec(0);
}

Time::Time(Triad t) {
    triad = t;
}

Time::Time(const Time& t) {
    setHour(t.getHour());
    setMin(t.getMin());
    setSec(t.getSec());
}

istream& operator >> (istream& in, Time& r) {
    in >> r.triad;
    return in;
}

Time::operator string () const {
    stringstream ss;
    ss << "h: " << triad.getHour() << "\nm: " << triad.getMin() << "\ns: " << triad.getSec() << endl;
    return ss.str();
}


ostream& operator << (ostream& out, const Time& r) {
    out << string(r);
    return out;
}

void Time::incremSec() {
    setSec(triad.getSec() + 1);
}

Time operator+(Time r, int n) {
    Time res;
    res.setMin(r.getMin() + n);
    return res;
}

Time operator*(Time r, int n) {
    Time res;
    res.setSec(r.getSec() + n);
    return res;
}

void Time::incremHour() {
    setHour(triad.getHour() + 1);
}

void Time::incremMin() {
    setMin(triad.getMin() + 1);
}