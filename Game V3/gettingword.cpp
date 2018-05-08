#include "stdafx.h"

/* A function to generate a random number that changes during runtime and is always between 0 and 9 */
int randomnumber()
{
	srand(time(NULL));
	return rand()%10 ;  
}


int Hints=4;


string hint()
{
	if (Hints>0)
	{
		for (int i=0 ; i<Show.length() ; i++)
		{
		
		  if (Show[i] == '*')
			{
				InputLetter = Original[i];
		        Hints--;
				Lifes++;
	            break;
		    }
		}

	}
	
	return Show;
	
}







	int add=0 ;
	int CorrectWords=0;
	void increase ()
	{
		CorrectWords++;
		if (CorrectWords%2==0)
		{
		Level++;
		add=add+10;
		}
	}


string word ()
{
	ifstream File ;
	string Word ;
	int CategoryNumber=randomnumber()%4 ;

	int WordNumber=randomnumber();
	
	if (CategoryNumber==0)
	{
		File.open("Animals.txt");
	}
	else if (CategoryNumber==1)
	{
		File.open("Countries.txt");
	}
	else if (CategoryNumber==2)
	{
		File.open("Actors.txt");
	}
	else if (CategoryNumber==3)
	{
		File.open("Movies.txt");
	}

	for (int i = 0; i < 51 ; i++)
	{
		getline(File, Word); /* Each time we a word is stored in the variable TempWord  */
		if (i == WordNumber + add) /* Once i (the loop counter) is equal to the random number , the word is returned as a random word */
		{
			File.close(); /* Closing the File so as to not stay opened in the RAM (important) */
			return Word;
		}
	}




}