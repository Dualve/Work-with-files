#include <iostream>

int sum(int a, int b);

using namespace std;

int main()
{ 
	int a, b;
	setlocale(LC_ALL, "Ru");
	cout << "¬ведите 1ую цифру: " << endl;
	cin >> a;
	cout << "¬ведите 2ую цифру: " << endl;
	cin >> b;
	cout << sum(a, b) << endl;

	system("Pause");
	return 0;
}

int sum(int a,int b)
{
	return a + b;
}