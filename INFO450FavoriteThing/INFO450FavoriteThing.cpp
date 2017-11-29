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
			string n, g, r, y;
			getline(datafile, n, ',');
			if (n.length())
			{
				getline(datafile, g, ',');
				getline(datafile, r, ',');
				getline(datafile, y, ',');
				myThing[count] = new FavoriteThing(n, g, stoi(r), stoi(y));
				count++;
			}
		}
	}

	cout << "There are " << count << " game entries." << endl;
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

	for (t = 0; t < count; t++)
	{
		delete myThing[t];
	}
	delete myThing;

    return 0;
}