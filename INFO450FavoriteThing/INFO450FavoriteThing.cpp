// INFO450FavoriteThing.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "stdafx.h"
#include "FavoriteThing.h"
#include <string>
using namespace std;

int main()
{
	FavoriteThing myThing1("Uncharted 2: Among Thieves", "Adventure", 1, 2009);
	FavoriteThing myThing2("Final Fantasy X", "Roleplaying", 2, 2001);
	FavoriteThing myThing3("Mega Man 2", "Platforming", 3, 1988);
	FavoriteThing myThing4("Fallout 3", "Roleplaying", 4, 2008);
	FavoriteThing myThing5("The Last of Us", "Survival Horror", 5, 2013);

	cout << " ====== Favorite Thing 1 ====== " << endl;
	myThing1.Display();
	cout << " ====== Favorite Thing 2 ====== " << endl;
	myThing2.Display();
	cout << " ====== Favorite Thing 3 ====== " << endl;
	myThing3.Display();
	cout << " ====== Favorite Thing 4 ====== " << endl;
	myThing4.Display();
	cout << " ====== Favorite Thing 5 ====== " << endl;
	myThing5.Display();

    return 0;
}

