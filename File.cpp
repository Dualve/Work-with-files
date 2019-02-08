#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Ru");

	ofstream fout;
	fout.open("program.txt");
	fout << "1st words in this text.\n";
	fout << "New list.\n";
	fout.close();

	ifstream fin("program.txt");
	char buff[500];
	fin >> buff;
	cout << "1st word - " << buff << endl;
	fin.getline(buff, 100);
	cout << "Other - " << buff << endl;
	fin.close();

	cout << endl;

	ofstream fout1("program.txt", ios_base::app);
	fout1 << " HELLO this is added information. ";
	fout1.close();

	ifstream fin1("program.txt");
	int counter = 0;
	while (!fin1.eof())
	{
		fin1.getline(buff, 500);
		counter+=1;
	}

	ifstream finR("program.txt");
	for (int i = 0; i < counter; i++)
	{
		finR.getline(buff, 500);
		cout << buff << endl;
	}
	fin1.close();

	cout << endl;

	ofstream fout2("program.txt",ios_base::out |ios_base::trunc);
	fout2 << "I am recohnize this text";
	fout2.close();

	ifstream fin2("program.txt");
	fin2.getline(buff, 500);
	cout << buff << endl;
	fin2.close();


	system("Pause");
	return 0;
}
