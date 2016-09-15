//Katie Faust
//Random Chore Generator
//If problems accure please do not try debugging, changing, or adding 
//anything in the code without me it could cause problems


//check the #includes with previous codes to ensure it is correct



#include <iostream>
#include <ctime>
#include <cstdlib>
#include "chorefunct.h"

using namespace std;

//GLOBAL VARIABLES
	const int MAXWEEKLY = 4; //Per week
	//const int MAXBIWEEKLY = 8;
	const int EASYCHORE = 1;
	const int MEDUIMCHORE = 2;
	const int HARDCHORE = 3; 

	static int CTHOUSEMATE1 = 0;  //Schweebs
	static int CTHOUSEMATE2 = 0;  //Ben
	static int CTHOUSEMATE3 = 0;  //Katie
	static int CTHOUSEMATE4 = 0;  //Josiah
	static int CTHOUSEMATE5 = 0;  //Jake
	static int CTHOUSEMATE6 = 0;  //Daniel


int main()
{
	srand(time(NULL));
	//For the members of the house
	// made as numbers in order to make easy changes
	// and to avoid any confusion with string tbh
	
	int ChoreNum; //hold the number of the chore that is being used

	bool all_chores;
	bool bi_weekly;
	bool weekly;
	string response;


	int num_of_ppl = 0;	//used to take the inputs
	int person;
	int worker_num;

	const int ARRAYMAX = 50;
	//11 chores so no one should be assigned more than 2? chores a week
	cout<<"The numbers to represent each housemate in this code are: "<<endl;
	cout<<"Schweebs = 1"<<endl;
	cout<<"Ben      = 2"<<endl;
	cout<<"Katie    = 3"<<endl;
	cout<<"Josiah   = 4"<<endl;
	cout<<"Jake     = 5"<<endl;
	cout<<"Daniel   = 6"<<endl;

	//Check to see what chores they want to change
	cout<<"Do you want to change all the chores? Y or N"<<endl;
	cin>>response;
	if(response == "Y" || response == "y")
	{
		all_chores = true;
		cout<<"Biweekly 1-6
				VaccumUp	 = 1
				VaccumDown	 = 2
				Mowing 		 = 3
				GeneralLawn	 = 4
				Dusting		 = 5
				Garage 		 = 6

			   Weekly 7-16
				General 	= 7
				Tech 		= 8
				Hardwood 	= 9
				TileUp 		= 10
				TileDown 	= 11				
				Trash 		= 12
				BathroomUp 	= 13
				BathroomDown= 14
				Refrigerator= 15
				Kitchen 	= 16"<<endl;
	}
	else
	{
		all_chores = false;
		cout<<"Would you like to change the biweekly chores? Y or N"<<endl;
		cin>> response;
		if(response == "Y" || response == "y")
		{
			bi_weekly = true;
		}
		else
		{
			bi_weekly = false;
			cout<<"Would you like to change the weekly chores? Y or N"<<endl;
			cin>> response;
			if(response == "Y" || response == "y")
			{
				weekly = true;
				
				//THIS IS FOR IF WE DECIDE THAT NOT ALL CHORE ARE GOING TO BE BIWEEKLY
				//cout<<"Please enter the numbers of the people that are assigned the following Biweekly Chores:"<<endl;
				//cout<<"Who is Vaccuming Upstairs?"<<endl;
				//cin<<worker_num;


				//VaccumUp	 = 1
				//VaccumDown	 = 2
				//Mowing 		 = 3
				//GeneralLawn	 = 4
				//Dusting		 = 5
				//Garage 		 = 6
			}
			else
			{
				weekly = false;
				cout<<"Okay no chores will be changed."<<endl;
				cout<<"Why the fuck did you not change any chores while running this?!?"<<endl;
				return;
			}
		}

	}


	cout<<"Input the number of people okay with working the vacuuming chore upstairs this week."<<endl;
	cin>> num_of_ppl;

	int okay_with_working[ARRAYMAX];

	cout<<"Input the numbers of the people okay with working the vacuuming chore."<<endl;
	cout<<"(Type one number, press enter, and repeat, or put spaces in between the numbers and press enter)"<<endl;
	for(int k = 0; k < num_of_ppl; k++)
	{
		cin>>okay_with_working[k];
		cout<<"Number "<<okay_with_working[k]<<" was added to array."<<endl;
	}
	
	//call functions that prints out the names that corresponds with each of the numbers
	
	cout<<"The people that are okay with working this chore are "<<endl;
	for(int h = 0; h < num_of_ppl; h++)
	{
		person = okay_with_working[h];
		printname(person);
		cout<<" "<<endl;
	}

	worker_num = (Chore_funct(num_of_ppl));
	upstairs_vac = okay_with_working[worker_num];


	cout<<" The person vacuuming upstairs is ";
	printname(upstairs_vac);
	cout<<"."<<endl;
	//all the chores that need to be done and how often they need to change

	/*
	//biweekly 1-6
	int VaccumUp = 1; //biweekly
	int VaccumDown= 2; //biweely
	int Mowing = 3; //biweekly
	int GeneralLawn = 4; //biweekly
	int Dusting = 5; //biweekly
	int Garage = 6; //biweekly

	//Weekly 7-16
	int General = 7; //weekly
	int Tech = 8; //weekly
	int Hardwood = 9; //weekly
	int TileUp = 10; //weekly
	int TileDown = 11;//weekly
	int Trash = 12; //weekly
	int BathroomUp = 13; //weekly
	int BathroomDown = 14; //weekly
	int Refrigerator = 15; //weekly
	int Kitchen = 16; //weekly

	//total of 16 chores
	// 13 chores when the up and down chores are counted together
	*/
	

	return 0;
}


