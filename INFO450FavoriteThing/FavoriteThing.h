#pragma once
#include <string>
#include "stdafx.h"
#include <iostream>
using namespace std;

class FavoriteThing
{
private:
	char myName[75];
	char myGenre[75];
	int rating;
	int year;
public:
	FavoriteThing();
	FavoriteThing(char mName[], char mGenre[], int r, int y);
	void Display();
};