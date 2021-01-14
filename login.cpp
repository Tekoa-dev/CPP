#include <iostream>
#include <string>
#include <fstream>	

using namespace std;

bool IsLoggedIn()
{
	string username, password, un, pw;

	cout << "Enter username: ";
	cin >> username;
	cout << "Enter password: ";
	cin >> password;

	ifstream read("E:\\" + username + ".txt");
	getline(read, un);
	getline(read, pw);

	if (un == username and pw == password)
	{

		cout << "Welcome " << un << " Your login was secure.";


		return true;

	}
	else
	{
		cout << "You have invalid credentials. ";

		return false;
	}

	
}


int main() {
	cout << "1. Register \n";
	cout << "2. Login \n";
	cout << "3. Close \n";
	cout << "Enter Your Option: ";

	int choice;

	cin >> choice;
	if (choice == 1)
	{
		string username, password, information;

		cout << "Please enter your username: ";

		cin >> username;

		cout << "Please enter your password: ";

		cin >> password;

		cout << "Please provide some information about yourself: ";

		cin >> information;


		ofstream file;
		file.open("E:\\" + username + ".txt");
		file << username << endl << password << endl << information;
		file.close();

		main();
	}
	else if (choice == 2)
	{
		IsLoggedIn();
	}
	else if (choice == 3)
	{
		return 0;
	}
	else
	{
		cout << "Invalid choice";
	}

	return 0;
	  

}


