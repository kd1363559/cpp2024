#pragma once

class Car {
public:
	Car();		//コンストラクタ
	~Car();		//デストラクタ
	double getMigration();


	void setSpeed(double speed);
	//走行する
	void drive(double hour);
private:
	double m_migration;
	//スピード
	double m_speed;
};