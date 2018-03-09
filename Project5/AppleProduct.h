#pragma once
#include <string>
#include <iostream>
#ifndef APPLEPRODUCT_H
#define APPLEPRODUCT_H

using namespace std;

namespace cs31
{
	class AppleProduct
	{
	public:
		enum class Kind { NOTSPECIFIED, IPHONE, IPAD, WATCH }; //define enum value
		AppleProduct(); //empty constructor
		AppleProduct(Kind kind, string version, string color, double cost); //constructor with all the variables
		
		string getVersion(); //get the private variable values
		
		string getColor();
		
		
		Kind getKind();
		double getCost();
		
		

	private:
		double mCost;
		string mVersion;
		string mColor;
		Kind mKind;
		
		
	};
	
};

#endif