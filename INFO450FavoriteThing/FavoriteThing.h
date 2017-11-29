#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include "stdafx.h"
using namespace std;

class FavoriteThing
{
private:
	string name;
	string genre;
	int rating;
	int year;
public:
	FavoriteThing();
	FavoriteThing(string n, string g, int r, int y);
	void Display();
	int CaptureThing();

	friend ofstream& operator<<(ofstream &fs, FavoriteThing *thing);
};