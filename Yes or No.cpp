#include "pch.h"
#include<iostream>
#include<cstdlib>
#include<cstring>
#include<ctime>
using namespace std;
double eq = 0;
char operators[4] = { '+', '-', '*', '/' };
int n1 = 0, n2 = 0, n3=0;
int randIndex = 0;
char s = ' ';
char ans=' ';
int score = 0, total_score = 0;
void instructions()
{
	cout << "This is a maths game of yes or no" << endl;
	cout << "The player will be shown a few equations and he/she will have to answer if the equation is correct or not." << endl;
	cout << "A right answer will fetch the player +10 points and a wrong answer will fetch -5 points!" << endl;
	cout << "In the end of the game the total score will be displayed." << endl;
	cout << "ALL THE BEST" << endl;
}
void randomize()
{
	srand(time(NULL));
	n1 = rand() % 10;
	n2 = rand() % 10;
	n3 = rand() % 10;
	randIndex = rand() % 4;
	s = operators[randIndex];
}
void questions()
{
	cout << "Q:" << n1 <<" "<< s <<" "<< n2 << " "<<"=" << n3 << endl;
}
int equations()
{
	if (s == '+')
	{
		eq = n1 + n2;
	}
	else if (s == '-')
	{
		eq = n1 - n2;
	}
	else if (s == '*')
	{
		eq = n1 * n2;
	}
	else if (s == '/')
	{
		eq = n1 / n2;
	}
	return eq;
}
void user_input()
{
	cout << "Do u think is correct(y/n)?" << endl;
	cin >> ans; 
}
void check()
{
	if (((eq = n3) && (ans = 'y')) || ((eq != n3) && (ans = 'n')))
	{
		cout << "Correct!" << endl;
		score = 10;
		cout << "Your score is:" << score << endl;
	}
	else if (((eq != n3) && (ans = 'y')) || ((eq = n3) && (ans = 'n')))
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
	cout << "\n\n";
	int c = 0;
	while(1)
	{
		randomize();
		questions();
		equations();
		user_input();
		check();
		c++;
		if (c == 10)
		{
			cout << "Game Over!" << endl;
			cout << "Your total score is:" << total_score << endl;
			break;
		}
	}
	return 0;
}
