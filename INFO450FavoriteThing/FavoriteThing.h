#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include "stdafx.h"
using namespace std;

class FavoriteThing
{
private:
	int rating;
	string name;
	string genre;
public:
	FavoriteThing();
	FavoriteThing(string n, int r, string g);
	void Display();
	int CaptureThing();

	friend ofstream& operator<<(ofstream &fs, FavoriteThing *thing);
};