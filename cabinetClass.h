#pragma once

/*
Ryann Palacio
CS441 - Software Engineering
Group Project - Recipe Class
*/


// Cabinet.h file
#ifndef CABINET_H_
#define CABINET_H_

#include<vector>

/*This Class cuerrently does not have access to the Ingredients class. When we put that together put Ingredient in parentheses of 
addIngredient and removeIngredient
also the vector should work once Ingredient is accessible. */

class Cabinet
{
private:

	~Cabinet();

	std::vector<Ingredient> ingredientVect;

public:
	Cabinet();

	void addIngredient(); //inside parentheses is an Ingredient to insert into vector

	void removeIngredient(); // remove an ingredient from a vector

	void viewCabinet(); // prints everything inside of the Ingredient Vector 
	


};

#endif