//Tammie Yang
//UID 804931834


#include <iostream>
#include <string>
#include <cassert>
#include <stdexcept>

#include "AppleProduct.h"
#include "AppleStore.h"

using namespace cs31;

int main()
{
	//the code used to test this program will be to the discretion of the graders
	// test AppleProduct code 

	AppleProduct p; //empty parameters
	assert(p.getCost() == 0.0);
	assert(p.getKind() == cs31::AppleProduct::Kind::NOTSPECIFIED);
	assert(p.getColor() == "");
	assert(p.getVersion() == "");
	
	
	cs31::AppleProduct p1(cs31::AppleProduct::Kind::IPHONE, "8", "Space Grey", 699.00);
	assert(std::to_string(p1.getCost()) == "699.000000");
	assert(p1.getKind() == cs31::AppleProduct::Kind::IPHONE);
	assert(p1.getColor() == "Space Grey");
	assert(p1.getVersion() == "8");

	cs31::AppleProduct p2(cs31::AppleProduct::Kind::IPHONE, "X", "RED", 100.00);
	assert(p2.getKind() == cs31::AppleProduct::Kind::IPHONE);
	assert(p2.getColor() == "RED");
	assert(p2.getVersion() == "X");
	assert(p2.getCost() == 100.0000);
	
	//test AppleStore code
	//WATCH
	cs31::AppleStore s1;
	cs31::AppleProduct watch3 = s1.buyWatch3("black like my soul");
	assert(watch3.getColor() == "black like my soul");
	assert(std::to_string(watch3.getCost()) == "329.000000");
	assert(watch3.getKind() == cs31::AppleProduct::Kind::WATCH);
	assert(watch3.getVersion() == "3");

	cs31::AppleStore s2;
	cs31::AppleProduct watch1 = s2.buyWatch1("black like my soul");
	assert(watch1.getColor() == "black like my soul");
	assert(std::to_string(watch1.getCost()) == "249.000000");
	assert(watch1.getKind() == cs31::AppleProduct::Kind::WATCH);
	assert(watch1.getVersion() == "1");
	//IPAD
	cs31::AppleStore s3;
	cs31::AppleProduct iPad32 = s3.buyiPad("lovely", 32);
	assert(iPad32.getColor() == "lovely");
	assert(std::to_string(iPad32.getCost()) == "329.000000");
	assert(iPad32.getKind() == cs31::AppleProduct::Kind::IPAD);
	assert(iPad32.getVersion() == "");
	try //give invalid parameter
	{
		cs31::AppleStore s4;
		cs31::AppleProduct iPad64 = s4.buyiPad("lovely", 64);
		assert(iPad64.getColor() == "lovely");
		assert(false);
	}
	catch (std::logic_error)
	{
		assert(true);
	}
	
	cs31::AppleStore s5;
	cs31::AppleProduct iPad128 = s5.buyiPad("lovely", 128);
	assert(iPad128.getColor() == "lovely");
	assert(std::to_string(iPad128.getCost()) == "429.000000");
	assert(iPad128.getKind() == cs31::AppleProduct::Kind::IPAD);
	assert(iPad128.getVersion() == "");

	try //give invalid parameter
	{
		cs31::AppleStore s6;
		cs31::AppleProduct iPad256 = s6.buyiPad("lovely", 256);
		assert(iPad256.getColor() == "lovely");
		assert(false);
	}
	catch (std::logic_error)
	{
		assert(true);
	}

	try //give invalid parameter
	{
		cs31::AppleStore s7;
		cs31::AppleProduct iPad512 = s7.buyiPad("lovely", 512);
		assert(iPad512.getColor() == "lovely");
		assert(false);
	}
	catch (std::logic_error)
	{
		assert(true);
	}

	//IPAD PRO
	try //give invalid parameter
	{
		cs31::AppleStore s8;
		cs31::AppleProduct iPadPro32 = s8.buyiPadPro("BEAUTIFUL", 32);
		assert(iPadPro32.getColor() == "BEAUTIFUL");
		assert(iPadPro32.getKind() == cs31::AppleProduct::Kind::IPAD);
		assert(iPadPro32.getVersion() == "Pro");
		assert(false);
	}
	catch (std::logic_error)
	{
		assert(true);
	}

	cs31::AppleStore s9;
	cs31::AppleProduct iPadPro64 = s9.buyiPadPro("pink", 64);
	assert(iPadPro64.getColor() == "pink");
	assert(std::to_string(iPadPro64.getCost()) == "649.000000");
	assert(iPadPro64.getKind() == cs31::AppleProduct::Kind::IPAD);
	assert(iPadPro64.getVersion() == "Pro");

	try //give invalid parameter
	{
		cs31::AppleStore s10;
		cs31::AppleProduct iPadPro128 = s10.buyiPadPro("BEAUTIFUL", 128);
		assert(iPadPro128.getColor() == "BEAUTIFUL");
		assert(iPadPro128.getKind() == cs31::AppleProduct::Kind::IPAD);
		assert(iPadPro128.getVersion() == "Pro");
		assert(false);
	}
	catch (std::logic_error)
	{
		assert(true);
	}

	cs31::AppleStore s11;
	cs31::AppleProduct iPadPro256 = s11.buyiPadPro("BLUEEEE", 256);
	assert(iPadPro256.getColor() == "BLUEEEE");
	assert(std::to_string(iPadPro256.getCost()) == "799.000000");
	assert(iPadPro256.getKind() == cs31::AppleProduct::Kind::IPAD);
	assert(iPadPro256.getVersion() == "Pro");

	cs31::AppleStore s12;
	cs31::AppleProduct iPadPro512 = s12.buyiPadPro("BROWN", 512);
	assert(iPadPro512.getColor() == "BROWN");
	assert(std::to_string(iPadPro512.getCost()) == "999.000000");
	assert(iPadPro512.getKind() == cs31::AppleProduct::Kind::IPAD);
	assert(iPadPro512.getVersion() == "Pro");
	
	//IPHONEX
	cs31::AppleStore s13;
	cs31::AppleProduct iPhoneX64 = s13.buyiPhoneX("Space Grey", 64);
	assert(std::to_string(iPhoneX64.getCost()) == "999.000000");
	assert(iPhoneX64.getKind() == cs31::AppleProduct::Kind::IPHONE);
	assert(iPhoneX64.getColor() == "Space Grey");
	assert(iPhoneX64.getVersion() == "X");

	cs31::AppleStore s14;
	cs31::AppleProduct iPhoneX256 = s14.buyiPhoneX("Space Grey", 256);
	assert(std::to_string(iPhoneX256.getCost()) == "1149.000000");
	assert(iPhoneX256.getKind() == cs31::AppleProduct::Kind::IPHONE);
	assert(iPhoneX256.getColor() == "Space Grey");
	assert(iPhoneX256.getVersion() == "X");
	try //give invalid parameter
	{
		cs31::AppleStore s15;
		cs31::AppleProduct iPhoneX256 = s15.buyiPhoneX("Space Grey", 2652652);
		assert(std::to_string(iPhoneX256.getCost()) == "0.000000");
		assert(iPhoneX256.getKind() == cs31::AppleProduct::Kind::IPHONE);
		assert(iPhoneX256.getColor() == "Space Grey");
		assert(iPhoneX256.getVersion() == "X");
		assert(false);
	}
	catch (std::logic_error)
	{
		assert(true);
	}
	//IPHONE 8 
	cs31::AppleStore store;
	cs31::AppleProduct iphone8_64 = store.buyiPhone8("Space Grey", 64);
	assert(std::to_string(iphone8_64.getCost()) == "699.000000");
	assert(iphone8_64.getKind() == cs31::AppleProduct::Kind::IPHONE);
	assert(iphone8_64.getColor() == "Space Grey");
	assert(iphone8_64.getVersion() == "8");

	cs31::AppleStore s16;
	cs31::AppleProduct iphone8_256 = s16.buyiPhone8("grey or gray idk", 256);
	assert(std::to_string(iphone8_256.getCost()) == "849.000000");
	assert(iphone8_256.getKind() == cs31::AppleProduct::Kind::IPHONE);
	assert(iphone8_256.getColor() == "grey or gray idk");
	assert(iphone8_256.getVersion() == "8");

	try //give invalid parameter
	{ 
		cs31::AppleStore s;
		cs31::AppleProduct iphone8 = s.buyiPhone8("Space Grey", 9999);
		assert(false);

	}
	catch (std::logic_error) {
		assert(true);
	}

	//IPHONE 8 PLUS

	cs31::AppleStore s18;
	cs31::AppleProduct iphone8Plus_256 = s18.buyiPhone8Plus("grey or gray idk", 256);
	assert(std::to_string(iphone8Plus_256.getCost()) == "949.000000");
	assert(iphone8Plus_256.getKind() == cs31::AppleProduct::Kind::IPHONE);
	assert(iphone8Plus_256.getColor() == "grey or gray idk");
	assert(iphone8Plus_256.getVersion() == "8Plus");

	try //give invalid parameter
	{
		cs31::AppleStore s20;
		cs31::AppleProduct iphone8Plus_4242 = s20.buyiPhone8Plus("grey or gray idk", 4242);
		assert(std::to_string(iphone8Plus_4242.getCost()) == "0.000000");
		assert(iphone8Plus_4242.getKind() == cs31::AppleProduct::Kind::IPHONE);
		assert(iphone8Plus_4242.getColor() == "grey or gray idk");
		assert(iphone8Plus_4242.getVersion() == "8Plus");
		assert(false);
	}
	catch (std::logic_error)
	{
		assert(true);
	}
	
	cs31::AppleStore s22;
	cs31::AppleProduct iphone8Plus_64 = s22.buyiPhone8Plus("grey or gray idk", 64);
	assert(std::to_string(iphone8Plus_64.getCost()) == "799.000000");
	assert(iphone8Plus_64.getKind() == cs31::AppleProduct::Kind::IPHONE);
	assert(iphone8Plus_64.getColor() == "grey or gray idk");
	assert(iphone8Plus_64.getVersion() == "8Plus");
	

	
	return 0;

}