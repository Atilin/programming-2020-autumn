#include<iostream>
using namespace std;
#include"ArrayList.h"
int main()
{
	ArrayList list1, list2;
	list1 += 4; list1 += 1; list1 += 2; list1 += 3; list1 += 4; list1 += 6;
	list2 += 19; list2 += 18; list2 += 15; list2 += 14; list2 += 13; list2 += 12;
	ArrayList list3;
	cout << "list1 = " << list1 << endl;
	cout << "list2 = " << list2 << endl;
	cout << "list3 = " << list3 << endl;
	cout << "list3 = list1 + 5" << endl;
	list3 = list1 + 5;
	cout << "list1 = " << list1 << endl;
	cout << "list2 = " << list2 << endl;
	cout << "list3 = " << list3 << endl;
	cout << endl;

	list1.clear(); list2.clear(); list3.clear();
	list1 += 4; list1 += 1; list1 += 2; list1 += 3; list1 += 4; list1 += 6;
	list2 += 19; list2 += 18; list2 += 15; list2 += 14; list2 += 13; list2 += 12;

	cout << "list1 = " << list1 << endl;
	cout << "list2 = " << list2 << endl;
	cout << "list3 = " << list3 << endl;
	cout << "list3 = list1 + list2" << endl;
	list3 = list1 + list2;
	cout << "list1 = " << list1 << endl;
	cout << "list2 = " << list2 << endl;
	cout << "list3 = " << list3 << endl;
	cout << endl;

	list1.clear(); list2.clear(); list3.clear();
	list1 += 4; list1 += 1; list1 += 2; list1 += 3; list1 += 4; list1 += 6;
	list2 += 19; list2 += 18; list2 += 15; list2 += 14; list2 += 13; list2 += 12;

	cout << "list1 = " << list1 << endl;
	cout << "list2 = " << list2 << endl;
	cout << "list3 = " << list3 << endl;
	cout << "list3 = 5 + list1" << endl;
	list3 = 5 + list1;
	cout << "list1 = " << list1 << endl;
	cout << "list2 = " << list2 << endl;
	cout << "list3 = " << list3 << endl;
	cout << endl;

	list1.clear(); list2.clear(); list3.clear();
	list1 += 4; list1 += 1; list1 += 2; list1 += 3; list1 += 4; list1 += 6;
	list2 += 19; list2 += 18; list2 += 15; list2 += 14; list2 += 13; list2 += 12;

	cout << "list1 = " << list1 << endl;
	cout << "list2 = " << list2 << endl;
	cout << "list3 = " << list3 << endl;
	cout << "list3 = list1 - 4" << endl;
	list3 = list1 - 4;
	cout << "list1 = " << list1 << endl;
	cout << "list2 = " << list2 << endl;
	cout << "list3 = " << list3 << endl;
	cout << endl;

	list1.clear(); list2.clear(); list3.clear();
	list1 += 4; list1 += 1; list1 += 2; list1 += 3; list1 += 4; list1 += 6;
	list2 += 19; list2 += 18; list2 += 15; list2 += 14; list2 += 13; list2 += 12;

	cout << "list1 = " << list1 << endl;
	cout << "list2 = " << list2 << endl;
	cout << "list3 = " << list3 << endl;
	cout << "list3 = 4 - list1" << endl;
	list3 = 4 - list1;
	cout << "list1 = " << list1 << endl;
	cout << "list2 = " << list2 << endl;
	cout << "list3 = " << list3 << endl;
	cout << endl;

	return 0;
}