#pragma once

class Sample {
public:
	int a;
	void func1();//パブリックにしかアクセスできない
private:
	int b;
	void func2();
};