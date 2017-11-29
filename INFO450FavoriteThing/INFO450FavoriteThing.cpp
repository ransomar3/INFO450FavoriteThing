// INFO450FavoriteThing.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include "stdafx.h"
#include "FavoriteThing.h"
using namespace std;

const int THINGSIZE = 100;

int main()
{
	FavoriteThing **myThing;
	int count = 0;
	int t;
	string input = "Y";

	myThing = new FavoriteThing*[THINGSIZE];

	// Read items to a file
	ifstream datafile("c:\\users\\adamransom\\Documents\\thing.txt");
	if (datafile.good())
	{
		while (!datafile.eof())
		{
			string name, rank, genre;
			getline(datafile, name, ',');
			if (name.length())
			{
				getline(datafile, rank, ',');
				getline(datafile, genre, '\n');
				myThing[count] = new FavoriteThing(name, stoi(rank), genre);
				count++;
			}
		}
	}

	cout << "There are " << count << " game entries. Do you want to input more?" << endl;
	cin >> input;

	// Count inventory items
	while (input == "Y" || input == "y")
	{
		myThing[count] = new FavoriteThing();
		if (myThing[count]->CaptureThing() == 0)
			count++;

		cout << "Are you entering another?" << endl;
		cin >> input;
	}

	for (t = 0; t < count; t++)
	{
		myThing[t]->CaptureThing();
	}

	// Save data entries to a text file 
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
	// To clean up the memory after
	for (t = 0; t < count; t++)
	{
		delete myThing[t];
	}
	delete myThing;

    return 0;
}