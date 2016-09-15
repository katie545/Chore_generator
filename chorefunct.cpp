//Katie Faust
//Random Chore Generator
//If problems accure please do not try debugging, changing, or adding 
//anything in the code without me it could cause problems

///////This is the functions page


//check the #includes with previous codes to ensure it is correct



#include <iostream>
#include <ctime>
#include <cstdlib>
#include "chorefunct.h"


using namespace std;
int Chore_Funct(int num_of_ppl)
{
	int rand_num;
	int worker;
	bool overworked = false;

	do
	{
		rand_num = rand();
		rand_num = rand_num % num_of_ppl;

		//call function to see if the person chose is overworked this week
		overworked(rand_num, )
	}while(overworked = true)	
	
	cout<< rand_num<<endl;

	worker = rand_num;
	return (worker);
}

void printname(int person)
{
	string HOUSEMATE1 = "Schweebs";  
	string HOUSEMATE2 = "Ben"; 
	string HOUSEMATE3 = "Katie";  
	string HOUSEMATE4 = "Josiah"; 
	string HOUSEMATE5 = "Jake"; 
	string HOUSEMATE6 = "Daniel"; 
	switch(person)
	{
		case 1:
		{
			cout<<HOUSEMATE1;
			break;
		}
		case 2:
		{
			cout<<HOUSEMATE2;
			break;
		}
		case 3:
		{
			cout<<HOUSEMATE3;
			break;
		}
		case 4:
		{
			cout<<HOUSEMATE4;
			break;
		}
		case 5:
		{
			cout<<HOUSEMATE5;
			break;
		}
		case 6:
		{
			cout<<HOUSEMATE6;
			break;
		}

	}	
}

bool overworked(int person)
{
	bool overworked = false;
	//if the workers counter plus how much the current chore is worth doesnt = 4
	//the worker is fine to do the chore
	//otherwise the chore funct will have to choose a different person

	return overworked;
}

void AddChore(int ChoreNum, int person)
{
	switch(ChoreNum)
	{
		case 1:
		{
			//The chore is vaccuming upstairs
			break;
		}
		case 2:
		{
			//the chore is Vaccuming downstairs
			break;
		}
		case 3:
		{
			//The chore is Mowing
			break;
		}
		case 4:
		{
			//The chore is General lawn
			break;
		}
		case 5:
		{
			//The chore is Dusting
			break;
		}
		case 6:
		{
			//The chore is Garage
			break;
		}
		case 7:
		{
			//The chore is General Expection
			break;
		}
		case 8:
		{
			//The chore is Tech
			break;
		}
		case 9:
		{
			//The chore is Hardwood
			break;
		}
		case 10:
		{
			//The chore is Tile upstairs
			break;
		}
		case 11:
		{
			//The chore is Tile downstair
			break:
		}
		case 12:
		{
			//The chore is Trash
			break;
		}
		case 13:
		{
			//The chore is Bathroom upstairs
			break;
		}
		case 14:
		{
			//The chore is Bathroom downstairs
			break;
		}
		case 15:
		{
			//The chore is Refrigerator
			break;
		}
		case 16:
		{
			//The chore is Kitchen
			break;
		}
	}

	return;
}