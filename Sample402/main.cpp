#include"car.h"	
#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	//インスタンスの生成
	/*Car* pKuruma=nullptr;
	pKuruma = new Car();*/

	unique_ptr<Car> pKuruma(new Car);
	//スピード設定
	pKuruma->setSpeed(40);
	//走行する
	pKuruma->drive(1.5);
	pKuruma->drive(2.0);
	cout << "総移動距離:" << pKuruma->getMigration() << "km" << endl;

	//delete pKuruma;
	cout << "インスタンスの消去終了" << endl;
	return 0;
}