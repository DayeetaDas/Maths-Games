#include "pch.h"
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int level = 0;
int n1 = 0, n2 = 0;
int ans = 0;
int min = 0;
int HCF = 0;
int score = 0, total_score = 0;
void instructions()
{
	cout << "In this math game the player is asked to find the HCF of 2 numbers." << endl;
	cout << "The player is asked to choose between three levels:"
		<< "1) Easy"
		<< "2) Medium"
		<< "3) Hard" << endl;
	cout << "The player has to choose any of the three numbers 1-3 to choose a level." << endl;
	cout << "The numbers for the three levels varies" << endl;
	cout << "The player gains 10 points for giving the right answer and -5 for the wrong answer." << endl;
	cout << "ALL The Best" << endl;
}
void input_level()
{
	cout << "Enter the level that you want to choose:" << endl;
	cin >> level;
}
void randomize()
{
	srand(time(NULL));
	if (level == 1)
	{
		n1 = rand() % 50;
		n2 = rand() % 50;
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
	cout << "Find the HCF of the following 2 numbers:" << endl;
	cout << n1 << " " << n2 << endl;
}
void user_input()
{
	cout << "Ans:";
	cin >> ans;
}
int find_HCF()
{
	if (n1 > n2)
		min = n2;
	else
		min = n1;
	for (int i = 1; i <= min; i++)
	{
		if (n1%i == 0 && n2%i == 0)
			HCF = i;
	}
	return HCF;
}
void check()
{
	if (ans = HCF)
	{
		cout << "Correct!" << endl;
		score = 10;
		cout << "Your score is=" << score << endl;
	}
	else if (ans != HCF)
	{
		cout << "Wrong!" << endl;
		score = -5;
		cout << "Your score is=" << score << endl;
	}
	total_score += score;
}
int main()
{
	instructions();
	input_level();
	int c = 0;
	while (c<=10)
	{
		randomize();
		questions();
		user_input();
		find_HCF();
		check();
		c++;
		if (c == 10)
		{
			cout << "Game Over" << endl;
			cout << "The total score is:" << total_score << endl;
			break;
		}
	}
	return 0;
}
