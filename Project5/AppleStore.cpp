#include <string>
#include <iostream>
#include "AppleStore.h"
#include "AppleProduct.h"
#include <stdexcept>

using namespace cs31;

AppleStore::AppleStore()
{
	AppleProduct p; //getting the private variable values from AppleProduct
	p.getColor();
	p.getCost();
	p.getKind();
	p.getVersion();

}


AppleProduct AppleStore::buyWatch1(string color) //Watch1 conditions
{
	
	AppleProduct(AppleProduct::Kind::WATCH, "1", color, 249.00);
	
	return AppleProduct(AppleProduct::Kind::WATCH, "1", color, 249.00); //return AppleProduct
}
AppleProduct AppleStore::buyWatch3(string color) //Watch3 conditions
{
	
	AppleProduct (AppleProduct::Kind::WATCH, "3", color, 329.00);
	
	return AppleProduct(AppleProduct::Kind::WATCH, "3", color, 329.00); //return AppleProduct
}

AppleProduct AppleStore::buyiPad(string color, int gigabytes)
{
	
		if (gigabytes == 32) //conditional statements, if the gigabytes provided is 32 or 128, there are specific conditions
		{
			AppleProduct(AppleProduct::Kind::IPAD, "", color, 329.00);
			return AppleProduct(AppleProduct::Kind::IPAD, "", color, 329.00);
		}
		else if (gigabytes == 128)
		{
			AppleProduct(AppleProduct::Kind::IPAD, "", color, 429.00);
			return AppleProduct(AppleProduct::Kind::IPAD, "", color, 429.00);
		}
		else //otherwise throw a logic error bc the gigabyte value isn't supported
		{
			logic_error error("oops!");
			throw(error);
		}
	
	return AppleProduct(AppleProduct::Kind::IPAD, "", color, 0.00); //just in case, the price doesn't matter
}
AppleProduct AppleStore::buyiPadPro(string color, int gigabytes)
{
	
	if (gigabytes == 64)
	{
		return AppleProduct(AppleProduct::Kind::IPAD, "Pro", color, 649.00);
		
	}
	else if (gigabytes == 256)
	{
		return AppleProduct(AppleProduct::Kind::IPAD, "Pro", color, 799.00);
	}
	else if(gigabytes == 512)
	{
		return AppleProduct(AppleProduct::Kind::IPAD, "Pro", color, 999.00);
	}
	else
	{
		
		logic_error error("oops!"); //throw that error
		throw(error);
	}
	return AppleProduct(AppleProduct::Kind::IPAD, "Pro", color, 0.000); //just in case
	
}
AppleProduct AppleStore::buyiPhone8(string color, int gigabytes)
{

	if (gigabytes == 64) //satisfy these conditions and return the necessary AppleProduct
	{
		AppleProduct(AppleProduct::Kind::IPHONE, "8", color, 699.000);
		return AppleProduct(AppleProduct::Kind::IPHONE, "8", color, 699.000);
	}
	else if (gigabytes == 256)
	{
		AppleProduct(AppleProduct::Kind::IPHONE, "8", color, 849.000);
		return AppleProduct(AppleProduct::Kind::IPHONE, "8", color, 849.000);
	}
	
	else
	{
		logic_error error("oops!");
		throw(error);
	}
	
	return AppleProduct();
}
AppleProduct AppleStore::buyiPhone8Plus(string color, int gigabytes)
{
	
	if (gigabytes == 64)
	{
		AppleProduct(AppleProduct::Kind::IPHONE, "8Plus", color, 799.0);
		return AppleProduct(AppleProduct::Kind::IPHONE, "8Plus", color, 799.0);
	}
	else if (gigabytes == 256)
	{
		AppleProduct(AppleProduct::Kind::IPHONE, "8Plus", color, 949.00);
		return AppleProduct(AppleProduct::Kind::IPHONE, "8Plus", color, 949.00);
	}

	else
	{
		logic_error error("oops!");
		throw(error);
	}
	return AppleProduct(AppleProduct::Kind::IPHONE, "8Plus", color, 0.00);
}
AppleProduct AppleStore::buyiPhoneX(string color, int gigabytes)
{
	
	if (gigabytes == 64)
	{
		AppleProduct(AppleProduct::Kind::IPHONE, "X", color, 999.00);
		return AppleProduct(AppleProduct::Kind::IPHONE, "X", color, 999.00);
	}
	else if (gigabytes == 256)
	{
		AppleProduct(AppleProduct::Kind::IPHONE, "X", color, 1149.00);
		return AppleProduct(AppleProduct::Kind::IPHONE, "X", color, 1149.00);
	}

	else
	{
		logic_error error("oops!");
		throw(error);
	}

	return AppleProduct(AppleProduct::Kind::IPHONE, "X", color, 0.00);
}

