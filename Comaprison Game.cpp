#include"pch.h"
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
char signs[4] = { '>', '<', '=' };
int n1 = 0, n2 = 0;
char eq = ' ';
char ans = ' ';
int score = 0, total_score = 0;
void instructions()
{
	cout << "This is the Comparison Game" << endl;
	cout << "U will be provided with 2 numbers and u will have to place an appropriate sign between them" << endl;
	cout << " either >, < or = to establish the true relationship between the 2 numbers" << endl;
	cout << "The correct answer will fetch +10 points and the wrong answer will fetch -5 points" << endl;
	cout << "The total score will be displayed at the end of 10 rounds" << endl;
	cout << "ALL THE BEST" << endl;
}
void randomize()
{
	srand(time(NULL));
	n1 = rand() % 10;
	n2 = rand() % 10;
}
void questions()
{
	cout <<"Q:"<<" "<< n1 << " " << "_____" << " " << n2 << endl;
}
int equations()
{
	if (n1 > n2)
		eq = '>';
	else if (n1 < n2)
		eq = '<';
	else if (n1 == n2)
		eq = '=';
	return eq;
}
void user_input()
{
	cout << "What sign would u place between these 2 numbers (>, < or =)?" << endl;
	cin >> ans;
}
void check()
{
	if (eq == ans)
	{
		cout << "Correct!" << endl;
		score = 10;
		cout << "The score is:" << score << endl;
	}
	else if (eq != ans)
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
		equations();
		user_input();
		check();
		c++;
		if (c == 10)
		{
			cout << "Game Over!" << endl;
			cout << "Your total score is =" << total_score << endl;
			break;
		}
	}
	return 0;
}
