#include <string>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include "stdafx.h"
#include "FavoriteThing.h"
using namespace std;

void FavoriteThing::Display()
{
	cout << " ========= Favorite Things ========= " << endl;
	cout << "My ranking: " <<  "#" << rating << endl;
	cout << "The name of it is: " << name << endl;
	cout <<  "It is a(n) " << genre << " game." << endl;
}

int FavoriteThing::CaptureThing()
{
	
	cout << "What is your ranking? " << endl;
	cin >> rating;
	cin.ignore();
	cin.clear();
	cout << "Input game name: " << endl;
	getline(cin, name);
	cout << "Input genre: " << endl;
	getline(cin, genre);
	
	return 0;
}

FavoriteThing::FavoriteThing()
{
	name = "";
	rating = 0;
	genre = "";
}

FavoriteThing::FavoriteThing(string n, int r, string g)
{
	
	name = n;
	rating = r;
	genre = g;
}

ofstream& operator<<(ofstream &fs, FavoriteThing *thing)
{
	fs << thing->name << "," << thing->rating << "," << thing->genre << endl;
	return fs;
}
