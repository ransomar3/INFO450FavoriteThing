#include "stdafx.h"
#include <string>
#include "FavoriteThing.h"
#include <iostream>
#include <fstream>
#include <stdio.h>
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
	cout << " ========= Favorite Thing 1 ========= " << endl;
	cout << "My favorite thing: video games!\n" << endl;
	cout << "The name of it is: " << name << endl;
	cout <<  "It is a(n) " << genre << " game." << endl;
	cout << "My rating: " << rating << " (from #1 to #5)" << endl;
	cout << "It was made in: " << year << endl;
}

int FavoriteThing::CaptureThing()
{
	cout << "Input game name: " << endl;
	cin >> name;
	cout << "Input genre: " << endl;
	cin >> genre;
	cout << "What is your ranking of it? (from #1, etc.) " << endl;
	cin >> rating;
	cout << "What year was it made? " << endl;
	cin >> year;

	return 0;
}

ofstream& operator<<(ofstream &fs, FavoriteThing *thing)
{
	fs << thing->name << "," << thing->genre << "," << thing->rating << "," << thing->year << "," << endl;
	return fs;
}
