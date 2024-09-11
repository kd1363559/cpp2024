
#include"car.h"	
#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	//インスタンスの生成
	Car kuruma;
	//スピード設定
	kuruma.setSpeed(40);
	//走行する
	kuruma.drive(1.5);

	kuruma.drive(2.0);

	cout << "総移動距離:" << kuruma.getMigration() << "km" << endl;

	return 0;
}