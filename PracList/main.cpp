#include<iostream>
#include<list>
using namespace std;

int main()
{
	{//li1�̖�����li2��A��
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
	{//li2�̐擪��li�P��A��
		list<int> li1{ 2,3,11,17 }, li2{ 5,7,13,19 };
		//�t�C�e���[�^ rbegin() :����  rend() :�擪���O�̃C�e���[�^
		for (auto it=li1.rbegin(); it != li1.rend(); it++)
		{
			li2.push_front(*it);
		}


		//li1.reverse();//�f�[�^����t���ɂ���
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
	
	{//merge�ŘA��
		list<int> li1{ 2,3,11,17 }, li2{ 5,7,13,19 };
		li1.merge(li2);
		cout << "merge: ";
		for (auto d : li1)
		{
			cout << d << " ";
		}
		cout << endl;
	}

	{//insert�ŘA��
		list<int> li1{ 2,3,11,17 }, li2{ 5,7,13,19 };
		//insert(�}���ꏊ�A�}���������f�[�^�̐擪�A����)
		li1.insert(li1.end(),li2.begin(),li2.end());
		cout << "li2�̗v�f: " << li2.size() << endl;
		cout << "insert: ";
		for (auto d : li1)
		{
			cout << d << " ";
		}
		cout << endl;
	}

	{//splice�ŘA��
		list<int> li1{ 2,3,11,17 }, li2{ 5,7,13,19 };
		//(�}���ꏊ�A�}�����������X�g)
		li1.splice(li1.end(), li2);
		li1.sort();
		cout << "li2�̗v�f: "<< li2.size()<< endl;
		cout << "splice: ";
		for (auto d : li1)
		{
			cout << d << " ";
		}
		cout << endl;
	}
}
