#include <iostream>;
using namespace std;

void menshee(int onenumber, int secondnumber)
{
	if (onenumber > secondnumber)
	{
		cout << secondnumber;
	}
	else if (onenumber < secondnumber)
	{
		cout << onenumber;
	}
}


int main() {
	int onenumber, secondnumber;
	char oprt;
	cout << "input first number \n";
	cin >> onenumber;
	cout << "input second number \n";
	cin >> secondnumber;
	cout << "\n";

	menshee(onenumber, secondnumber);
}