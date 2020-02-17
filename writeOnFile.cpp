#include<iostream>
#include<fstream>
using namespace std;



int main()
{
	ofstream file("file.txt") ;
	if (file.is_open())
	file<<"Hello world";
	else cout<<"Unable to open file";
	file.close();
	
	
	return 0;
}
