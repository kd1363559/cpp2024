#include<iostream>
#include"sample.h"

using namespace std;
int main() {
	Sample s;
	s.setNum(5);
	cout << s.getNum() << endl;
	return 0;
}