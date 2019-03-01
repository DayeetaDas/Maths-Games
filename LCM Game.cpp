#include "pch.h"
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int n1 = 0, n2 = 0;
int ans = 0;
int LCM = 0;
int level = 0;
int maxval = 0;
int score = 0, total_score = 0;
void instructions()
{
	cout << "This is a math game in which the player have to find the LCM of 2 numbers." << endl;
	cout << "The player can select 1, 2 or 3 for the three different levels in the game." << endl;
	cout << "The levels are: "
		<< "1)Easy"
		<< "2)Medium"
		<< "3)Hard" << endl;
	cout << "The three levels will generate numbers with different ranges." << endl;
	cout << "A correct answer will give you a +10 points and a wrong answer will give you a -5 points" << endl;
	cout << "ALL The Best" << endl;
}
void user_input()
{
	cout << "Enter the level that you have chosen:" << endl;
	cin >> level;
}
void randomize()
{
	srand(time(NULL));
	if (level == 1)
	{
		n1 = rand() % 20;
		n2 = rand() % 20;
	}
	else if (level == 2)
	{
		n1 = rand() % 100;
		n2 = rand() % 100;
	}
	else if (level == 3)
	{
		n1 = rand() % 200;
		n2 = rand() % 200;
	}
}
void questions()
{
	cout << "The two numbers of which you will have to find the LCM of are:"<<endl;
	cout << n1 << "," << n2 << endl;
}
void check()
{
	cout << "Ans:";
	cin >> ans;
	if (n1 > n2)
		maxval = n1;
	else
		maxval = n2;
	while (1)
	{
		if ((maxval%n1 == 0) && (maxval%n2 == 0))
		{
			LCM = maxval;
			break;
		}
		++maxval;
	}
	if (ans == maxval)
	{
		cout << "Correct!" << endl;
		score = 10;
		cout << "Your score is:" << score << endl;
	}
	else if (ans != maxval)
	{
		cout << "Wrong!" << endl;
		score = -5;
		cout << "Your score is:" << score << endl;
	}
	total_score += score;
}
int main()
{
	instructions();
	cout << endl;
	user_input();
	int c = 0;
	while (1)
	{
		randomize();
		questions();
		check();
		c++;
		if (c == 10)
		{
			cout << "Game Over!" << endl;
			cout << "The total score is=" << total_score << endl;
			break;
		}
	}
	return 0;
}