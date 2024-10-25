#include<iostream>
#include<list>
using namespace std;

int main()
{
	{//li1の末尾にli2を連結
		list<int> li1{ 2,3,11,17 }, li2{ 5,7,13,19 };
		for (auto it = li2.begin(); it != li2.end(); it++)
		{
			li1.push_back(*it);
		}

		/*for (auto b : li2)
		{
			li1.push_back(b);
		}*/
		cout << "li1 :";
		for (auto d : li1)
		{
			cout << d << " ";
		}
		cout << endl;
	}
	{//li2の先頭にli１を連結
		list<int> li1{ 2,3,11,17 }, li2{ 5,7,13,19 };
		//逆イテレータ rbegin() :末尾  rend() :先頭より前のイテレータ
		for (auto it=li1.rbegin(); it != li1.rend(); it++)
		{
			li2.push_front(*it);
		}


		//li1.reverse();//データ列を逆順にする
		//for (auto d : li1)
		//{
		//	li2.push_front(d);
		//}


		cout << "li2: ";
		for (auto d : li2)
		{
			cout << d << " ";
		}
		cout << endl;
	}
	
	{//mergeで連結
		list<int> li1{ 2,3,11,17 }, li2{ 5,7,13,19 };
		li1.merge(li2);
		cout << "merge: ";
		for (auto d : li1)
		{
			cout << d << " ";
		}
		cout << endl;
	}

	{//insertで連結
		list<int> li1{ 2,3,11,17 }, li2{ 5,7,13,19 };
		//insert(挿入場所、挿入したいデータの先頭、末尾)
		li1.insert(li1.end(),li2.begin(),li2.end());
		cout << "li2の要素: " << li2.size() << endl;
		cout << "insert: ";
		for (auto d : li1)
		{
			cout << d << " ";
		}
		cout << endl;
	}

	{//spliceで連結
		list<int> li1{ 2,3,11,17 }, li2{ 5,7,13,19 };
		//(挿入場所、挿入したいリスト)
		li1.splice(li1.end(), li2);
		li1.sort();
		cout << "li2の要素: "<< li2.size()<< endl;
		cout << "splice: ";
		for (auto d : li1)
		{
			cout << d << " ";
		}
		cout << endl;
	}
}
