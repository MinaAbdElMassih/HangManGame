#include "stdafx.h"

struct player
{
    string name ;
    int score ;
};


void wipe ()
{
    ofstream file;
    file.open("Players.txt", std::ofstream::out | std::ofstream::trunc);
    file.close();
}

void High ()
{
    player player1,player2,player3,player4;

    ifstream myfile ;
    myfile.open("Players.txt");
    myfile>>player1.name ;
    myfile>>player1.score;
    myfile>>player2.name ;
    myfile>>player2.score;
    myfile>>player3.name ;
    myfile>>player3.score;

    player4.name=PlayerName ;
	player4.score=Score ;

    if (player4.score>=player1.score)
    {
        player3.name=player2.name ;
        player3.score=player2.score ;

        player2.name=player1.name ;
        player2.score=player1.score ;

        player1.name=player4.name ;
        player1.score=player4.score ;
    }
    else if (player4.score>=player2.score)
    {
        player3.name=player2.name ;
        player3.score=player2.score ;

        player2.name=player4.name ;
        player2.score=player4.score ;

    }
    else if (player4.score>player3.score)
    {
        player3.name=player4.name ;
        player3.score=player4.score ;

    }
    myfile.close();
    wipe();
    ofstream myfile2 ;
    myfile2.open("Players.txt");
    myfile2<<player1.name<<" "<<player1.score<<endl;
    myfile2<<player2.name<<" "<<player2.score<<endl;
    myfile2<<player3.name<<" "<<player3.score ;

    myfile2.close();

}