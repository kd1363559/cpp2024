#include"rat.h"

int main()
{
	Rat* r1, * r2, * r3;
	r1 = new Rat();			//1匹目のネズミインスタンスを生成
	r1->squeak();			//ネズミ１がなく
	Rat::showNum();			//ネズミの総数を表示（性的メンバ関数の実行）

	r2 = new Rat();			//ネズミ２のインスタンスを生成
	r3 = new Rat();			//ネズミ３のインスタンスを生成

	r2->squeak();			//ネズミ２がなく
	r3->squeak();			//ネズミ３がなく
	Rat::showNum();			//ネズミの総数を表示
	delete r1;				//ネズミ１のインスタンスを消去
	delete r2;				//ネズミ２のインスタンスを消去
	Rat::showNum();			//ネズミの総数を表示
	delete r3;				//ネズミ３のインスタンスを消去
	Rat::showNum();			//ネズミの総数を表示

	return 0;
}