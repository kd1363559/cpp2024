#include <iostream>
#include "calc.h"

int main(){
	Calc* pC1{}, * pC2{};
	pC1 = new Calc();
	pC2 = new Calc(1, 2);
	cout << 3 << "+" << 4 << "=" << pC1->add<int>(3, 4) << endl;
	cout << pC2->getA() << "+" << pC2->getB() << "=" << pC2->add() << endl;

	coout << 1.1 << "+" << 2.5 << "=" << pC1->add<double>(1.1, 2.5) << endl;
	cout << "ABC" << "+" << "DEF" << "=" << pC1-> > add<string>("ABC", "DEF") << endl;

	cout<<"5"<<"+"<<3,2

	delete pC1;
	delete pC2;
	return 0;
}