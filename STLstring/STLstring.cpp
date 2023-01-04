#define _CRT_SECURE__NO_WARNINGS 1
#include<bits/stdc++.h>
using namespace std;
void t1()
{
	string str1("hello world");
	cout << str1 << endl;
	string str2(5, 'A');
	cout << str2 << endl;
	string str3 = str2;
	cout << str3 << endl;

	string str4 = "hello world";
	cout << str4 << endl;
	str4 = 'w';
	cout << str4 << endl;

	str4.assign("hello world", 5);
	cout << str4 << endl;

	string str5 = "hello world";
	str4.assign(str5, 2, 3);//从2开始3个字符
	cout << str4 << endl;

}
void t2()
{
	string str1 = "hello world";
	cout << str1[1] << " " << str1.at(1) << endl;
	str1[1] = 'E';
	str1.at(6) = 'H';
	cout << str1 << endl;
}
void t3()
{
	string str1 = "hello";
	str1 += "world";
	cout << str1 << endl;
	string str2 = "hehe";
	str1 += str2;
	cout << str1 << endl;

	string str3 = "hello";
	string str4 = "world";
	cout << str3 + str4 << endl;

	string str5 = "hello";
	string str6 = "world";
	str5.append(str6, 2, 3);
	cout << str5 << endl;

	string str7 = "hello";
	str7.append("world", 3);
	cout << str7 << endl;
}
void t4()
{
	string str1 = "http://www.sex.777.sex.com";
	while (1) {
		int ret = str1.find("sex");
		if (ret == -1)break;
		else str1.replace(ret, 3, "***");
	}
	cout << str1 << endl;
}
void t5()
{
	string str1 = "hehe";
	string str2 = "haha";
	if (str1.compare(str2) == 0)cout << "相等" << endl;//str1==str2
	else if (str1.compare(str2) > 0)cout << "大于" << endl;//str1>str2
	else if (str1.compare(str2) < 0)cout << "小于" << endl;//str1<str2
}
void t6()
{
	string str1 = "hehehe:hahaha:xixixi:lalala";
	int pos = 0;
	while (1) {
		int ret = str1.find(":", pos);
		if (ret < 0) {
			string tmp = str1.substr(pos, str1.length() - pos);
			cout << tmp << endl;
			break;
		}
		string tmp = str1.substr(pos, ret - pos);
		cout << tmp << endl;
		pos = ret + 1;
	}
}
void t7()
{
	string str1 = "hello";
	str1.insert(2, "###");
	cout << str1 << endl;

	str1.erase(2, 3);
	cout << str1 << endl;
	str1.erase(0, str1.length());
	cout << str1 << endl;
	cout << str1.length() << " " << str1.capacity() << endl;
}
void t8()
{
	//char*转string
	string str1;
	str1 = (string)"hello";
	cout << str1 << endl;
	//string不能直接转char*，需要成员函数c_str
	string str2 = "hello";
	char* p = (char*)str2.c_str();
	cout << p << endl;
}
int main()
{
	t1();
	//t2();
	//t3();
	//t4();
	//t5();
	//t6();
	//t7();
	//t8();
	return 0;
}

