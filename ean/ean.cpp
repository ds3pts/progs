//============================================================================
// Name        : ean.cpp
// Author      : Rohlmann, Dennis
//
// Version     : 1.0
// Created     : 23.02.2016
// Revision    : none
// Compiler    : g++
//============================================================================

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <stdlib.h>

using namespace std;

int main()
{
	// Variablen
	int ean [] ={8,4,3,7,0,0,3,8,3,9,1,5,3}; // ean nummer
	int summe = 0;
	int pruefziffer = 0;	

	for (int i = 0; i < 12; i++)
	{
		// Ungerade
		if (i % 2==1)
		{
			summe += ean[i] * 3;
		}
		// Gerade
		else if (i % 2 == 0)
		{
			summe += ean[i] * 1;
		}
	}		
	pruefziffer = (10 - (summe % 10));
	if (ean[12] == pruefziffer)
	{	
		cout << pruefziffer << endl;
		cout << "Pruefziffer ist korrekt" << endl;
	}
	else	
	{
		cout << pruefziffer << endl;
		cout << "Pruefziffer ist falsch" << endl;
	}
}
