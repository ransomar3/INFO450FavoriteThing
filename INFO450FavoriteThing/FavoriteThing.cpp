#include <iostream>
#include "stdafx.h"
#include "FavoriteThing.h"
using namespace std;

FavoriteThing::FavoriteThing()
{
	name = "";
	genre = "";
	rating = 0;
	year = 2017;
}

FavoriteThing::FavoriteThing(string n, string g, int r, int y)
{
	name = n;
	genre = g;
	rating = r;
	year = y;
}

void FavoriteThing::Display()
{
	cout << "My favorite thing is video games!\n" << endl;
	cout << "The name of it is: " << name << endl;
	cout <<  "It is a" << genre << " game.\n" << endl;
	cout << "My rating: " << rating << endl;
	cout << "It was made in:\n " << year << endl;
}
