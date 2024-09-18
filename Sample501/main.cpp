#include"car.h"	
#include"ambulance.h"
#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	cout << "--Carクラスの処理" << endl;


	//インスタンスの生成
	Car kuruma;
	//スピード設定
	kuruma.setSpeed(40);
	//走行する
	kuruma.drive(1.5);

	kuruma.drive(2.0);

	cout << "総移動距離:" << kuruma.getMigration() << "km" << endl;


	cout << "-- Ambulanceクラスの処理" << endl;

	Ambulance* pAmb=new Ambulance();

	pAmb->setSpeed(60);
	pAmb->drive(2);
	cout << "総移動距離:" << pAmb->getMigration() << "km" << endl;
	pAmb->sevePeople();
	delete pAmb;


	return 0;
}