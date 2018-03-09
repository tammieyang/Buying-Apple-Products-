#include <string>
#include <iostream>
#include "AppleProduct.h"

using namespace cs31;


AppleProduct::AppleProduct() //set them to baseline-either empty strings or the NOTSPECIFIED condition for Kind
{
	mVersion = "";
	mColor = "";
	mKind = Kind::NOTSPECIFIED;
	mCost = 0.0;
	
}

AppleProduct::AppleProduct(Kind kind, string version, string color,  double cost) //set the private variables to the values set
{
	mVersion = version;
	mColor = color;
	mCost = cost;
	mKind = kind;
	
}
string AppleProduct::getVersion()  //return the private variables
{
	return mVersion;
}
string AppleProduct::getColor()
{
	
	return mColor;
}
double AppleProduct::getCost()
{
	
	return mCost;
}

AppleProduct::Kind AppleProduct::getKind() 
{ 
	return mKind;
}