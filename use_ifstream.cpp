#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
	ifstream infile;
	infile.open("test");
		
	char ch;
	while(infile >> ch)
	{
		cout << ch;
	}
	
	cout << endl;
	infile.close();
	return 0;
}
