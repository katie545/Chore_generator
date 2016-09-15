//Katie Faust
//Random Chore Generator
//If problems accure please do not try debugging, changing, or adding 
//anything in the code without me it could cause problems



//could create a class called worker that would hold their chore points, a DS that holds all the chores they are being assigned
	//the DS would probably work well to be a stack so that the last one added would be on top and if the chore has too many points it can be easily removed
/////////////**************NEED TO FIGURE OUT HOW TO ADD THIS BECAUSE I LIKE THE IDEA*********///////////
/*
class Worker
{
	public:
		int counter = 0;
		int chores[5];
			//would hold the number of the chore they weere assigned
		//Functions
			//couldn't put many functions in here because most of them dont get called by a speific predetermined worker
		//would need a function that created the chores array

		void FinalPrint();
			//would print out all the chores they are working for that week
		void addChore(int ChoreNum); 
			//would basically just call the stack funciton that adds something to the top
}
*/


#ifndef CHOREFUNCT_H
#define CHOREFUNCT_H

#include <string>
#include <iostream>
using namespace std;

//All chores will return an int that will translate into someone in the house
int Chore_Funct(int num_of_ppl);

void printname(int person);

bool overworked(int person);
//checks to see if the person chosen for the chore has too many other chores

void addChore(int ChoreNum, int worker);
//use a big switch case to see which person it is working that chore
//then use that info to call the function in the class to add it to their stack

 #endif