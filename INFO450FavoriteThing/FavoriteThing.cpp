#include "stdafx.h"
#include <string>
#include "FavoriteThing.h"
#include <iostream>
using namespace std;

FavoriteThing::FavoriteThing()
{
	strcpy_s(myName, "");
	strcpy_s(myGenre, "");
	rating = 0;
	year = 2017;
}

FavoriteThing::FavoriteThing(char mName[], char mGenre[], int r, int y)
{
	strcpy_s(myName, mName);
	strcpy_s(myGenre, mGenre);
	rating = r;
	year = y;
}

void FavoriteThing::Display()
{
	cout << "My favorite thing is video games!\n" << endl;
	cout << "The name of it is: " << myName << endl;
	cout <<  "It is a(n) " << myGenre << " game." << endl;
	cout << "My rating: " << rating << endl;
	cout << "It was made in: " << year << endl;
}
