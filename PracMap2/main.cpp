#include<iostream>
#include<map>
#include<random>
using namespace std;
int main()
{
	//‰p’PŒê‚Ì˜a–ó‚Æ‰p–ó‚ÌƒyƒA‚ðdic‚ÉŠi”[
	map<string, string> dic{ {"Šˆ“®","acticity"},
		{"•µˆÍ‹C","atmosphere"},{"ŒŒ‰t","blood"},
		{"ŠÂ‹«","environment"},{"‰·“x","temperanture"} };
		
	
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

	//—”¶¬Šú‚ðì¬
	random_device rand_dev{};
	//—”ƒAƒ‹ƒSƒŠƒYƒ€‚Éƒƒ‹ƒZƒ“ƒkƒcƒCƒXƒ^[‚ðŽw’è
	mt19937 rand_engine(rand_dev());
	//0`(map‚Ì—v‘f”)-1‚ð‹Ï“™‚ÈŠm—¦‚Å“¾‚é•ª•z¶¬Šú‚ðì¬
	uniform_int_distribution<int>
		dist(0,dic.size() - 1);

	auto it = dic.begin();
	it = next(it, dist(rand_engine));
	cout << it->first << "‚Ì‰p–ó‚ÍH" << endl;
	string input;//“ü—Í•¶Žš
	cin >> input;
	if (input==it->second)
	{
		cout << "³‰ð!" << endl;
	}
	else
	{
		cout << "•s³‰ð..." << endl;
	}
	
	return 0;

}