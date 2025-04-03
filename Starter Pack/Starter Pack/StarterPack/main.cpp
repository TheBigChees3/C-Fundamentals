#include <iostream>
#include <string>

using namespace std;

int main()
{
	int iScore = 0;

	char cIn;

	cout << "Welcome to non bias questionnaire!" << endl << endl;
	cout << "This program tests your choices and if they are correct." << endl << endl;
	cout << "The maximum score is 100." << endl << endl;

	cout << "Your favourite type of pizza crust? :" << endl;
	cout << "A - Thin Crust." << endl;
	cout << "B - Stuffed Crust." << endl;
	cout << "C - Deep Dish." << endl;
	cout << "Your answer: ";

	cin >> cIn;

	if (cIn == 'b' || cIn == 'B') iScore = iScore + 15;
	else if (cIn == 'a' || cIn == 'A') iScore = iScore + 25;
	else iScore;

	cout << endl << endl << "What is your favourite game? :" << endl;
	cout << "A - Call of Duty." << endl;
	cout << "B - Elden Ring." << endl;
	cout << "C - None of the above." << endl;
	cout << "Your answer: ";

	cin >> cIn;

	if (cIn == 'c' || cIn == 'C') iScore + 15;
	else if (cIn == 'b' || cIn == 'B') iScore = iScore + 25;
	else iScore;

	cout << endl << endl << "What is your favourite nvidia gpu? :" << endl;
	cout << "A - 3080ti." << endl;
	cout << "B - 5090." << endl;
	cout << "C - 1080ti." << endl;
	cout << "Your answer: ";

	cin >> cIn;

	if (cIn == 'a' || cIn == 'A') iScore = iScore + 15;
	else if (cIn == 'c' || cIn == 'C') iScore = iScore + 25;
	else iScore;

	cout << endl << endl << "Your favourite web browser is:" << endl;
	cout << "A - Google Chrome." << endl;
	cout << "B - Opera GX." << endl;
	cout << "C - Microsoft Edge." << endl;
	cout << "Your answer: ";

	cin >> cIn;

	if (cIn == 'b' || cIn == 'B') iScore = iScore + 25;
	else if (cIn == 'a' || cIn == 'A') iScore = iScore + 15;
	else iScore; 

	cout << endl << endl << "Your score was: " << iScore << endl << endl;

	if (iScore == 100)
	{
		cout << "Congratulations, you are correct!" << endl;
	}

	else if (iScore >= 60)
	{
		cout << "Congratulations, you are mostly correct!" << endl;
	}

	else
	{
		cout << "Bad luck. Your choices were sub par!" << endl;
	}

	cout << endl << "Goodbye" << endl;

	system("pause");

	return 0;
}