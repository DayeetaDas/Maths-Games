#include "pch.h"
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int n1 = 0, n2 = 0, n3 = 0;
char s1 = ' ', s2 = ' ';
char a1 = ' ', a2 = ' ';
int score = 0, total_score = 0;
void instructions()
{
	cout << "This is a game where u will be given three numbers." << endl;
	cout << "U will have to use different signs to fill the blanks between these numbers" << endl;
	cout << "in order to establish a meanigful relationship among them." << endl;
	cout << "U can use these signs '>','<','=','+','-','*','/'" << endl;
	cout << "A correct answer will fetch +10 points and a wrong answer will fetch -5 points." << endl;
	cout << "The total score will be displayed at the end of 10 rounds" << endl;
	cout << "ALL THE BEST" << endl;
}
void randomize()
{
	srand(time(NULL));
	n1 = rand() % 10;
	n2 = rand() % 10;
	n3 = rand() % 10;
}
void questions()
{
	cout << "Q:" << " " << n1 << "__" << n2 << "__" << n3 << endl;
}
int signs()
{
	if ((n1 > n2>n3)==true)
	{
		s1 = '>';
		s2 = '>';
	}
	if ((n1 > n2 < n3)==true)
	{
		s1 = '>';
		s2 = '<';
	}
	if ((n1 < n2< n3)==true)
	{
		s1 = '<';
		s2 = '>';
	}
	if ((n1 < n2 > n3)==true)
	{
		s1 = '<';
		s2 = '<';
	}
	if ((n1 > n2==n3)==true)
	{
		s1 = '>';
		s2 = '=';
	}
	if ((n1 < n2== n3)==true)
	{
		s1 = '<';
		s2 = '=';
	}
	if ((n1 + n2) == n3)
	{
		s1 = '+';
		s2 = '=';
	}
	if ((n1 - n2)== n3)
	{
		s1 = '-';
		s2 = '=';
	}
	if ((n1 * n2) == n3)
	{
		s1 = '*';
		s2 = '=';
	}
	if ((n1 / n2) == n3)
	{
		s1 = '/';
		s2 = '=';
	}
	if (n1 = n2 = n3)
	{
		s1 = '=';
		s2 = '=';
	}
	return s1, s2;
}
void user_input()
{
	cout << "Enter your answers here:" << endl;
	cin >> a1 >> a2;
}
void check()
{
	if ((a1 = s1) && (a2 = s2))
	{
		cout << "Correct!" << endl;
		score = 10;
		cout << "The score is:" << score << endl;
	}
	else
	{
		cout << "Wrong!" << endl;
		score = -5;
		cout << "The score is:" << score << endl;
	}
	total_score += score;
}
int main()
{
	instructions();
	cout << "\n\n";
	int c = 0;
	while (1)
	{
		randomize();
		questions();
		signs();
		user_input();
		check();
		c++;
		if (c == 10)
		{
			cout << "Game Over!" << endl;
			cout << "The total score is:" << total_score << endl;
			break;
		}
	}
	return 0;
}