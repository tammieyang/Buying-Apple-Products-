#pragma once
#ifndef APPLESTORE_H
#define APPLESTORE_H
#include <string>
#include "AppleProduct.h"

using namespace std;
namespace cs31
{
	class AppleStore //: public AppleProduct
	{
	public:
		AppleStore();
		
		AppleProduct buyWatch1(string color); //defining all these functions
		AppleProduct buyWatch3(string color);

		AppleProduct buyiPad(string color, int gigabytes);
		AppleProduct buyiPadPro(string color, int gigabytes);
		AppleProduct buyiPhone8(string color, int gigabytes);
		AppleProduct buyiPhone8Plus(string color, int gigabytes);
		AppleProduct buyiPhoneX(string color, int gigabytes);
		
	private:
		
	};
}




#endif
