#include "pch.h"
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int n1 = 0, n2 = 0;
char signs[4] = { '+','-','*','/' };
char sign[2] = { ' ', '-' };
char s = ' ';
char s1 = ' ';
double eq = 0;
double ans = 0;
int score = 0, total_score = 0;
void instructions()
{
	cout << "This is a math game where the player will have to find the value of x for a given equation." << endl;
	cout << "A correct answer will fetch +10 points and a wrong answer will fetch a -5 points." << endl;
	cout << "The total score will be displayed at the end of 10 rounds." << endl;
	cout << "All The Best!" << endl;
}
void randomize()
{
	srand(time(NULL));
	n1 = rand() % 10;
	n2 = rand() % 10;
	int randIndex = rand() % 4;
	s = signs[randIndex];
	int randind = rand() % 2;
	s1 = sign[randind];
}
void questions()
{
	cout << "Q: "<< s1 << "x"<<s<<" " << n1 << " =" << n2 << endl;
}
double storeanswer()
{
	if (s = '+')
		eq = n2 - n1;
	else if (s = '-')
		eq = n2 + n1;
	else if (s = '*')
		eq = n2 / n1;
	else if (s = '/')
		eq = n2 * n1;
	return eq;
}
void user_input()
{
	cout << "Enter your answer here:" << endl;
	cin >> ans;
}
void check()
{
	if (ans = eq)
	{
		cout << "Correct!";
		score = +10;
		cout << "Your score is:" << score << endl;
	}
	else if (ans != eq)
	{
		cout << "Wrong!";
		score = -5;
		cout << "Your score is:" << score << endl;
	}
	total_score += score;
}
int main()
{
	instructions();
	int c = 0;
	while (c <= 10)
	{
		randomize();
		questions();
		storeanswer();
		user_input();
		check();
		c++;
		if (c == 10)
		{
			cout << "Game Over!" << endl;
			cout << "Your total score is:" << endl;
			cout << total_score << endl;
			break;
		}
	}
	return 0;
}