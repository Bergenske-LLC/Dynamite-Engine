#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
	string senario;
	string choice1;
	string choice1a;
	string choice2;
	string choice2a;
	string userchoice;
	cout << "Dynamite Engine \n";
	cout << "v0.1.0a \n";
	cout << "Create your own choices game! \n";
	cout << "What do you want the senario to be? \n";
	getline(cin, senario);
	cout << "What do you want choice number 1 to be? \n";
	getline(cin, choice1);
	cout << "What do you want the output of choice number 1 to be? \n";
	getline(cin, choice1a);
	cout << "What do you want choice number 2 to be? \n";
	getline(cin, choice2);
	cout << "What do you want the output of choice number 2 to be? \n";
	getline(cin, choice2a);
	cout << "Your game is all ready now! \n";
	Sleep(3000);
	for (int n = 0; n < 1000; n++)
	{
	printf("\n\n\n\n\n\n\n\n\n\n");
	}

	cout << senario << endl;
	cout << "What do you want to do? \n";
	cout << choice1 << " or " << choice2 << endl;
	getline(cin, userchoice);
	
	if (userchoice == choice1)
	{
		cout << choice1a << endl;
	}
	if (userchoice == choice2)
	{
		cout << choice2a << endl;
	}
}