#include <iostream>
using namespace std;

int increasingTriangle(int n)
{	
	cout << "This Is an Increasing star pattern \n";
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "* ";
		}
		cout << "\n";
	}
	return 0;
}
int decreasingTriangle(int n)
{	
	cout << "This Is an Decreasing star pattern \n";
	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j <= n; j++)
		{
			cout << "* ";
		}
		cout << "\n";
	}
	return 0;
}
int rightTriangle(int n)
{
	cout << "This Is a Right Triangle star pattern \n";
	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j <= n; j++)
		{
			cout << "  ";
		}
		for (int j = 1; j <= i; j++)
		{
			cout << "* ";
		}

		cout << "\n";
	}
	return 0;
}
int leftTriangle(int n)
{	
	cout << "This is Left Triangle Star Pattern" << endl;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "  ";
		}
		for (int j = i; j <= n; j++)
		{
			cout << "* ";
		}

		cout << "\n";
	}
	return 0;
}
int hillPattern(int n)
{	
	cout << "This Is The Hill Star Pattern" << endl;
	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j <= n; j++) //decreasing Space
		{
			cout << "  ";
		}
		for (int j = 1; j < i; j++)  //increasing Star
		{
			cout << "* ";
		}
		for (int j = 1; j <= i; j++)  //increasing Star
		{
			cout << "* ";
		}
		cout << "\n";
	}


	return 0;
}
int reverseHillPattern(int n)
{	
	cout << "This is A Reverse Hill Star Pattern" << endl;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)  //Incrse Space
		{
			cout << "  ";
		}
		for (int j = i; j < n; j++)		//Decr. Star
		{
			cout << "* ";
		}
		for (int j = i; j <= n; j++)		//Decrs. Star
		{
			cout << "* ";
		}
		cout << "\n";
	}
	return 0;
}
int diamondPattern(int n)
{
	cout << "This Is The DIAMOND Star Pattern" << endl;
	for (int i = 1; i < n; i++)
	{
		for (int j = i; j <= n; j++) //decreasing Space
		{
			cout << "  ";
		}
		for (int j = 1; j < i; j++)  //increasing Star
		{
			cout << "* ";
		}
		for (int j = 1; j <= i; j++)  //increasing Star
		{
			cout << "* ";
		}

		cout << "\n";
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)  //Incrse Space
		{
			cout << "  ";
		}
		for (int j = i; j < n; j++)		//Decr. Star
		{
			cout << "* ";
		}
		for (int j = i; j <= n; j++)		//Decrs. Star
		{
			cout << "* ";
		}
		cout << "\n";
	}
	return 0;
}
int main() 
{	cout<<"this is the main function ";
	increasingTriangle(5);
	decreasingTriangle(5);
	rightTriangle(5);
	leftTriangle(5);
	hillPattern(5);
	reverseHillPattern(5);
	diamondPattern(5);

	return 0;
}
