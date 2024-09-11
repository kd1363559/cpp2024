#include<iostream>
#include"car.h"

using namespace std;

int main(int argc, char** argv)
{
	//インスタンスの生成
	Car kuruma;
	//スピード設定
	kuruma.setSpeed(40);
	//走行する
	kuruma.drive(1.5);

	return 0;
}