#include <iostream>
using namespace std;

int main()
{
	int *pt = new int;
	*pt = 1000;
	cout<<*pt<<endl;
	int *ps = pt;
	delete ps;
	cout<<*ps<<endl;
	return 0;
}

