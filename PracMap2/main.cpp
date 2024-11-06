#include<iostream>
#include<map>
#include<random>
using namespace std;
int main()
{
	//英単語の和訳と英訳のペアをdicに格納
	map<string, string> dic{ {"活動","acticity"},
		{"雰囲気","atmosphere"},{"血液","blood"},
		{"環境","environment"},{"温度","temperanture"} };
		
	
	//for (auto it = dic.begin(); it != dic.end(); it++)
	//{
	//	cout << it->first << endl;
	//}
	////cout << dic.begin()->first << endl;

	//for (auto p : dic)
	//{
	//	cout << p.first << endl;
	//	
	//}

	//乱数生成期を作成
	random_device rand_dev{};
	//乱数アルゴリズムにメルセンヌツイスターを指定
	mt19937 rand_engine(rand_dev());
	//0〜(mapの要素数)-1を均等な確率で得る分布生成期を作成
	uniform_int_distribution<int>
		dist(0,dic.size() - 1);

	auto it = dic.begin();
	it = next(it, dist(rand_engine));
	cout << it->first << "の英訳は？" << endl;
	string input;//入力文字
	cin >> input;
	if (input==it->second)
	{
		cout << "正解!" << endl;
	}
	else
	{
		cout << "不正解..." << endl;
	}
	
	return 0;

}