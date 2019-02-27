#include "pch.h"
#include<iostream>
using namespace std;
int n = 0;
int n1 = 0, n2 = 0;
int min = 0;
int HCF=0;
void user_input()
{
	cout << "Enter the numbers of which u want to find the HCF of here:" << endl;
	cin >> n1 >> n2 ;
}
void find_HCF()
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
	cout << "The HCF is:" << HCF << endl;
}
int main()
{
	user_input();
	find_HCF();
	return 0;
}