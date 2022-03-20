#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int num, gues, tr = 0;
	srand(time(0));
	num = rand() % 100 + 1;
	cout << "Guess my namber game\n";
	do
	{
		cout << "enter a guess between 1 and 100 :\t";
		cin >> gues;
		tr++;
		if (gues > num)
			cout << "too high !\n";
		else if (gues < num)
			cout << "Too low! \n";
		else
			cout << "\n Correct ! you got it i" << tr << "guesses!\n";
		
	}while (gues != num);
    return 0;
}