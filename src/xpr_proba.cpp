#include <iostream>
#include <iomanip>
#include <sstream>
#include "../inc/common.h"
#include "../inc/cards.h"

void Pre_Flop(int *card1, int *card2);
int *Flop(int *card1, int *card2);
int Count_Players();

using namespace std;

int main(void)
{
	bool pflop;
	int nb_players;
	int **card1 = new int*[2];
	int **card2 = new int*[2];
	nb_players = Count_Players();
	
	for(int i=0; i<2; i++)
	{
		card1[i] = new int[nb_players];
		card2[i] = new int[nb_players];
	}

	card1 = Input_Card(nb_players);
	card2 = Input_Card(nb_players);

	cout	<<"Pre-flop ? (1=yes ; 0=no) ";
	cin		>>pflop;
	cout	<<endl;
	
	Display_Cards_All(card1, card2, nb_players);
	
	if(pflop)
	{
		//Pre_Flop(card1, card2, nb_players);
	}
}

int Count_Players()
{
	Clear_Screen();
	int nb_players;
	cout	<<"*** How many players ? ";
	cin		>>nb_players;

	return nb_players;
}

void Pre_Flop(int *card1, int *card2)
{
	card1 = reinterpret_cast<int*>(new int[2][2]);
	card2 = reinterpret_cast<int*>(new int[2][2]);
	
}

/*int *Flop(int *card1, int *card2)
{
	card1 = new int[2];
	card2 = new int[2];
	int flop = new int[3];
	List_Cards();
	cout	<<"What is your card ? ";
	cin		>>card[0];
}*/
