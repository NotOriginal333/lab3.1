#include "Time.h"
#include <iostream>

using namespace std;

int main() {
	Time t1, res;
	Triad tr1, tr2;

	cout << "t1 = "; cin >> t1;
	cout << t1 << endl;

	t1.incremHour();
	t1.incremMin();
	t1.incremSec();
	cout << "t1(increm) = " << t1 << endl;

	cout << "t1: " << t1;

	int n;
	cout << "(minute) n = "; cin >> n;
	res = t1 + n;
	cout << "t1 + n =" << res.getTriad().getMin() << endl;
	cout << "(second) n = "; cin >> n;
	res = t1 * n;
	cout << "t1 * n = " << res.getTriad().getSec() << endl;

	tr2 = t1.getTriad();
	cout << "tr2: " << endl;
	cout << "tr2: " << tr2 << endl;
}