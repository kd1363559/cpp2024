#include"chara.h"
#include"player.h"
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<Player*> pPlayer{ new Player(100, 50, 20, 30) };
	pPlayer.push_back(new Player(300,70,40,50));
	for (int i = 0; i < pPlayer.size(); i++)
	{
		//Player* pPlayer = new Player(100, 50, 20, 30);
		cout << "Player�̏��" << endl
			<< " HP  :" << pPlayer[i]->getHp() << endl
			<< " SP  :" << pPlayer[i]->getSp() << endl
			<< " Atk :" << pPlayer[i]->getAtk() << endl
			<< " Def :" << pPlayer[i]->getDef() << endl;
	}

	auto itr = pPlayer.begin();
	while (itr != pPlayer.end())
	{
		delete* itr;
		itr= pPlayer.erase(itr);
	}

	//delete pPlayer;
	return 0;
}