#pragma once
#include <string>
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
};