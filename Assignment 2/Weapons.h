#pragma once

class Weapons
{
/*
Here we'll have many class functions for the different weapons in the game, since it says in the instructions
and probably include stuff like their damage amounts and whatnot.
*/

/*
The weapons have 4 attributes as explained by the instructions:
	
	Below I listed some ideas on how to do each weapon in the class - in this example I'll use a generic "sword"

	a. A Boolean flag to know if you own that weapon. -

	This is supposed to trigger if you try to buy the same weapon twice.
	I'll be honest I'm struggling a bit on how to implement this
	obviously it's a boolean so true/false - false if you don't own and true if you do
	but I'm just a bit stuck on how to implement that into the class.

	b. A string for the weapon name.
	
	Should be easy, in the store inventory just have all the weapon names displayed.
	we'll do this via cout-ing a part of the class that just "returns the weapons string name"
	so like:

	cout << weaponClass.getSwordName() << endl;
	cout << weaponClass.getStaffName() << endl;
	cout << weaponClass.getDaggerName() << endl;
	cout << weaponClass.getScrollName() << endl;

	c. A string for the sound the weapon/item makes when it’s used.
	
	we'll have a section of the each weapon in the class that just returns a pre-written string for the sound effect
	
	if user enters his input to attack, just:

	cout << weaponClass.getSwordSound() << endl;
	
	and it should show something just like:
	*chingg!*


	d. For part of the bonus that is outlined later, an integer for the ammo/uses of each
	weapon/item.

	it's bonus, i'm not gonna worry about these rn for the sake of time tbh

*/



};