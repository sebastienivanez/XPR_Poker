#include <iostream>
#include <iomanip>
#include <sstream>

void Display_Cards(int **card1, int **card2, int player, int nb_players);
void Display_Cards_All(int **card1, int **card2, int nb_players);
int **Input_Card(int nb_players);
void List_Cards();
void List_Colors();
string **Num2Card(int **card, int nb_players);

using namespace std;

void Display_Cards(int **card1, int **card2, int player, int nb_players)
{
	Clear_Screen();
	string **scard1 = new string*[2];
	string **scard2 = new string*[2];
	
	for(int i=0; i<2; i++)
	{
		scard1[i] = new string[nb_players];
		scard2[i] = new string[nb_players];
	}
	
	scard1 = Num2Card(card1, nb_players);
	scard2 = Num2Card(card2, nb_players);

	cout	<<"--- Player n°"<<player+1<<endl;
	cout	<<setw(2)<<scard1[0][player]<<" "<<scard1[1][player]<<endl;
	cout	<<setw(2)<<scard2[0][player]<<" "<<scard2[1][player]<<endl;
}

void Display_Cards_All(int **card1, int **card2, int nb_players)
{
	Clear_Screen();
	string **scard1 = new string*[2];
	string **scard2 = new string*[2];
	
	for(int i=0; i<2; i++)
	{
		scard1[i] = new string[nb_players];
		scard2[i] = new string[nb_players];
	}
	
	scard1 = Num2Card(card1, nb_players);
	scard2 = Num2Card(card2, nb_players);

	for(int i=0; i<nb_players; i++)
	{
		cout	<<"--- Player n°"<<i+1<<endl;
		cout	<<setw(5)<<scard1[0][i]<<" "<<scard1[1][i]<<endl;
		cout	<<setw(5)<<scard2[0][i]<<" "<<scard2[1][i]<<endl;
	}
}

int **Input_Card(int nb_players)
{
	Clear_Screen();
	int **card = new int*[2];

	for(int i=0; i<2; i++)
	{
		card[i] = new int[nb_players];
	}
	
	for(int i=0; i<nb_players; i++)
	{
		cout	<<"--- Player n°"<<i+1<<endl;		
		List_Cards();
		cout	<<endl<<"*** What is your card ? ";
		cin		>>card[0][i];
		cout	<<endl;
		List_Colors();
		cout	<<endl<<"*** Which color is your card ? ";
		cin		>>card[1][i];
		cout	<<endl;
		Clear_Screen();
	}

	return card;
}

void List_Cards()
{
	cout	<<"List of Cards :"<<endl;
	cout	<<"As"<<setw(7)<<" -->"<<setw(3)<<"1"<<endl;
	cout	<<"2"<<setw(8)<<" -->"<<setw(3)<<"2"<<endl;
	cout	<<"3"<<setw(8)<<" -->"<<setw(3)<<"3"<<endl;
	cout	<<"4"<<setw(8)<<" -->"<<setw(3)<<"4"<<endl;
	cout	<<"5"<<setw(8)<<" -->"<<setw(3)<<"5"<<endl;
	cout	<<"6"<<setw(8)<<" -->"<<setw(3)<<"6"<<endl;
	cout	<<"7"<<setw(8)<<" -->"<<setw(3)<<"7"<<endl;
	cout	<<"8"<<setw(8)<<" -->"<<setw(3)<<"8"<<endl;
	cout	<<"9"<<setw(8)<<" -->"<<setw(3)<<"9"<<endl;
	cout	<<"10"<<setw(7)<<" -->"<<setw(3)<<"10"<<endl;
	cout	<<"Valet"<<" -->"<<setw(3)<<"11"<<endl;
	cout	<<"Dame"<<setw(5)<<" -->"<<setw(3)<<"12"<<endl;
	cout	<<"Roi"<<setw(6)<<" -->"<<setw(3)<<"13"<<endl;
}

void List_Colors()
{
	cout	<<"Carreau"<<" -->"<<setw(2)<<"1"<<endl;
	cout	<<"Trefle"<<setw(5)<<" -->"<<setw(2)<<"2"<<endl;
	cout	<<"Coeur"<<setw(6)<<" -->"<<setw(2)<<"3"<<endl;
	cout	<<"Pique"<<setw(6)<<" -->"<<setw(2)<<"4"<<endl;
}

string **Num2Card(int **card, int nb_players)
{
	string **scard = new string*[2];

	for(int i=0; i<2; i++)
	{
		scard[i] = new string[nb_players];
	}
	
	for(int i=0; i<nb_players; i++)
	{
		switch(card[0][i])
		{
			case 1:
				scard[0][i] = "As";
				break;
			case 2:
				scard[0][i] = "2";
				break;
			case 3:
				scard[0][i] = "3";
				break;
			case 4:
				scard[0][i] = "4";
				break;
			case 5:
				scard[0][i] = "5";
				break;
			case 6:
				scard[0][i] = "6";
				break;
			case 7:
				scard[0][i] = "7";
				break;
			case 8:
				scard[0][i] = "8";
				break;
			case 9:
				scard[0][i] = "9";
				break;
			case 10:
				scard[0][i] = "10";
				break;
			case 11:
				scard[0][i] = "Valet";
				break;
			case 12:
				scard[0][i] = "Dame";
				break;
			case 13:
				scard[0][i] = "Roi";
				break;
		}
		
		switch(card[1][i])
		{
			case 1:
				scard[1][i] = "Carreau";
				break;
			case 2:
				scard[1][i] = "Trefle";
				break;
			case 3:
				scard[1][i] = "Coeur";
				break;
			case 4:
				scard[1][i] = "Pique";
				break;
		}
	}

	return scard;
}
