#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool IsLoggedIn()
{
	string username, password, un, pw;

	cout << "Enter Username: ";
	cin >> username;
	cout << "Enter Password: ";
	cin >> password;

	ifstream read("c:\\testfile.txt");
	getline(read, un);
	getline(read, pw);

	if (un == username && pw == password)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int Main()
{
	IsLoggedIn();

	if (IsLoggedIn)
	{
		cout << "Successfully logged in!";
		cin;
		return 1;
	}
	else
	{
		cout << "False login!";
		cin;
		return 0;
	}
}