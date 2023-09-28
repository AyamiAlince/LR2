#include <iostream>;
using namespace std;

void menshee(int onenumber)
{
	if (onenumber % 2 ==0)
	{
		cout <<  "chetnoe";
	}
	else if (onenumber )
	{
		cout << "NEchetnoe";;
	}
}


int main() {
	int onenumber;
	char oprt;
	cout << "input first number \n";
	cin >> onenumber;
	cout << "\n";

	menshee(onenumber);
}