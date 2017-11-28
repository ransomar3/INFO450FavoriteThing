// INFO450FavoriteThing.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "stdafx.h"
#include "FavoriteThing.h"
#include <string>
#include <fstream>
using namespace std;

const int LISTSIZE = 75;

int main()
{
	FavoriteThing **myThing;
	int count = 0;
	int t;
	string response = "Y";

	myThing = new FavoriteThing*[LISTSIZE];

	ifstream infile("c:\\users\\adamransom\\Documents\\thing.txt");
	if (infile.good())
	{
		while (!infile.eof())
		{
		string name, genre, rating, year;
		getline(infile, name, ',');
		if (name.length())
			{
				getline(infile, genre, ',');
				getline(infile, rating, ',');
				getline(infile, year, ',');
				myThing[count] = new FavoriteThing(stoi(name), stoi(genre), rating, year);
				count++;
			}
		}
	}

	cout << "There are " << count << "game entries." << endl;
	cin >> response;


	while (response == "Y" || response == "y")
	{
		myThing[count] = new FavoriteThing();
		if (myThing[count]->CaptureThing() == 0)
			count++;

		cout << "Enter another?" << endl;
		cin >> response; 
	}

	for (t = 0; t < count; t++)
	{
		myThing[t]->CaptureThing();
	}

	ofstream outfile("c:\\users\\adamransom\\Documents\\thing.txt");
	if (!outfile.good())
	{
		cout << "ERROR: Cannot open file! Try again." << endl;
		return -1;
	}

	for (t = 0; t < count; t++)
	{
		outfile << myThing[t];
	}
	for (t = 0; t < count; t++)
	{
		delete myThing[t];
	}
	delete myThing;

    return 0;
}

