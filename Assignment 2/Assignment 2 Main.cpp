#include <iostream>
#include "Weapons.h"
using namespace std;

/*
*	Introduction:
* 
*	Create a C++ application that simulates a numbered inventory slot system for weapons.
*	The application will be split into two parts, the first of which will have the user populating their
*	inventory slots with weapons they will ‘buy’ from a simple store with a few options. Once the
*	player has their weapons, the second part will be a simulation on switching and using the
*	weapons in the slots.
*/

/*	REQUIREMENTS/NOTES:
*	
	1) You MUST use a simple class for the weapons/items.
	
	2) Create and store the item objects in an array in the main program.
	
	3) You don’t have to be able to go back to the store once the simulation round starts.
	
	4) The two stages of the game should be in their own looping structures where the user
	makes their selections. Once the store interaction stage is done, the application
	proceeds into the next loop for the simulation interaction.
*/

/*
 Inventory Guidelines:
	1) You can have a maximum of 9 weapons and a minimum of 5
	
	2) The slots will be represented by the number keys 1-9. You don’t need a 0.
	
	3) It will be up to you to choose what weapons you want. It doesn’t have to be violent
	weapons either and they could be something else of your choosing so long as the items
	can be used.
	
	4) Since the second half of the course introduces abstract data types (classes), you are
	required to create a simple class for your weapons or objects to build objects from. The
	name of the class should be generic like "Weapon" or "ElderScroll" or "Wand", etc. Here are
	the attributes you should create:
		
		a. A Boolean flag to know if you own that weapon.
		b. A string for the weapon name.
		c. A string for the sound the weapon/item makes when it’s used.
		d. For part of the bonus that is outlined later, an integer for the ammo/uses of each
		weapon/item.
*/

int main()
{
	/*
	Part 1: The Store
	
	1) The store is represented as a simple menu system with the following options:
		
		a. Buy Weapon
		b. Check Balance
		c. Exit Store
	
	2) The player will start off with an amount of money that you specify, and the amount
	should be enough to buy the most expensive weapon the store offers, but not enough to
	buy ALL the weapons. The details of this is up to you. Some creativity is encouraged.
	
	3) The ‘Buy Weapon’ interaction consists of asking the player which weapon they want to
	buy. The slot the weapon goes into should also be conveyed.
		
		a. You must do a check to see if there is already a weapon in that slot.
		b. You must check to see if the player has enough money to buy.
		c. HINT: If a buy is successful, flip the Boolean flag on the weapon object to true and
		store that object in your array of weapon objects.
		d. You can also use this array to ensure that the player doesn’t have a
		weapon in that slot. Also deduct the weapon cost from the player money.
	
	8) The ‘Check Balance’ option simply displays the amount of money the player has left.
	
	9) The ‘Exit Store’ option will move the game onto the second stage. You MUST ensure
	that the player has at least bought one weapon before proceeding. 
	
	HINT: Loop through the objects array to check if there’s an element OR create a simple 
	bool variable that is set when the player purchases.
	*/

	int weaponSelection;
	int goldAmount = 1000;

	cout << "Welcome to the store traveller! You have " << goldAmount << " gold.\n";
	cout << "Here is our stock:\n";
	cout << "PLACEHOLDER WEAPON 1 - ENTER 1 TO SELECT\n"; //This will eventually reference the Weapon class.
	cout << "PLACEHOLDER WEAPON 2 - ENTER 2 TO SELECT\n"; //This will eventually reference the Weapon class.
	cout << "PLACEHOLDER WEAPON 3 - ENTER 3 TO SELECT\n"; //This will eventually reference the Weapon class.
	cout << "PLACEHOLDER WEAPON 4 - ENTER 4 TO SELECT\n"; //This will eventually reference the Weapon class.

	cout << "Please select your weapon!\n";
	
	do
	{
		cin >> weaponSelection;

		if (weaponSelection == 1)						// This entire section will eventually be significantly bumped out and all weapons will reference
		{												// the Weapons.h class to display their traits like names, damage values, etc.
														// furthermore, we will have to use a boolean flag to manage owning a weapon instead of
														// Just saying you do in the if/else if statements - and the we're supposed to store them in "an array of weapon objects"
														// I'm really lost on that last part tbh...
			cout << "PLACEHOLDER WEAPON 1 SELECTED\n";
			cout << "PLACEHOLDER WEAPON 1 purchased! Your gold balance is now " << goldAmount - 100 << endl;
			break;
		}
		else if (weaponSelection == 2)					
		{
			cout << "PLACEHOLDER WEAPON 2 SELECTED\n";
			cout << "PLACEHOLDER WEAPON 2 purchased! Your gold balance is now " << goldAmount - 250 << endl;
			break;
		}
		else if (weaponSelection == 3)	
		{
			cout << "PLACEHOLDER WEAPON 3 SELECTED\n";
			cout << "PLACEHOLDER WEAPON 3 purchased! Your gold balance is now " << goldAmount - 500 << endl;
			break;
		}												
		else if (weaponSelection == 4)
		{
			cout << "PLACEHOLDER WEAPON 4 SELECTED\n";
			cout << "PLACEHOLDER WEAPON 4 purchased! Your gold balance is now " << goldAmount - 300 << endl;
			break;
		}
		else
		{
			cout << "Invalid input! Please select your weapon by either entering 1, 2, 3, or 4.\n";
		}
	} while (weaponSelection != 1, 2, 3, 4);

	cout << "Thank you for visiting the store! To leave, press any key.\n";
	
	system("pause");

	return 0;
}








// I pasted the 2nd part of the assignment here - but not in the int main() since we haven't gotten to that part yet.
/*
Part 2: The Simulation
	
	1) After the store menu loop, your game should go into another loop that represents using
	the weapons and being able to switch between them. You have lots of freedom to do this
	how you choose but follow the criteria below.
	
	2) During this simulation, you must be able to:
		
		a. Switch between weapons by entering an option from 1 to 9 or how many
		weapons (at least 5) you are using.
		b. Use a weapon by entering a key option of your choice. Like ‘e’ or ‘f’ or something.
		More details in item 4.

	3) You can use simple cin for this as this is basic C++. The downside is you need to hit
	enter after your option.
	
	4) When you use a weapon/item, output the string from the object attribute that stores a
	description of the sound when the weapon is used. Use your imagination for the strings
	but keep it clean.
	
	5) HINT: for this part, you need to keep track of the weapon/item being selected so you
	should have an int variable that represents the index of the weapon/item.
*/


/*
OPTIONAL BONUS:

1) Each weapon/item has a maximum number of uses. Use the attribute I mentioned in 4d
to keep track of the ammo/uses. Setup these numbers as you see fit.

2) During the simulation stage, if the weapon/item is used, decrement the ammo/uses from
the array.

3) If the weapon/item is spent, output a message that it is out of uses/ammo.

*/