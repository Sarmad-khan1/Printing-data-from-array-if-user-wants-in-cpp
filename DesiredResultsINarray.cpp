#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	
	system("cls");
	int element[5];
	cout<<"Insert data in an array at memory location element[0]: ";
	cin>>element[0];
	cout<<"Insert data in an array at memory location element[1]: ";
	cin>>element[1];
	cout<<"Insert data in an array at memory location element[2]: ";
	cin>>element[2];
	
	cout<<"Insert data in an array at memory location element[3]: ";
	cin>>element[3];
	cout<<"Insert data in an array at memory location element[4]: ";
	cin>>element[4];
	
	
	cout<<"If you want to print the data then press 1 otherwise press 0 to exit: ";
	int number;
	cin>>number;
	if(number == 1)
	{
		for( int i=0; i<5; i++)
		{
			cout<<"Element at memory location "<<i+1<<" is: "<<element[i]<<endl;
		}
	}
	else{
		cout<<"Now press any key to terminate...";
		getch();
		exit(0);
	}
}