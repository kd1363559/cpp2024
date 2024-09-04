#include<iostream>
#include"car.h"

using namespace std;

int main(int argc, char** argv)
{
	//インスタンスの生成
	Car nbox,tanto;
	//スピード設定
	nbox.speed = 40;
	//走行する
	nbox.drive(1.5);


	//スピード設定
	tanto.speed = 50;
	//走行する
	tanto.drive(1.0);
	return 0;
}