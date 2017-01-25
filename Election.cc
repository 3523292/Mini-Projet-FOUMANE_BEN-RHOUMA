/************************************************************************************************************************************
                                                    
												Projet FOUMANE Paul et BEN RHOUMA Yassin


*************************************************************************************************************************************/

#include "Election.hh"


int Election::indice1 = 1;
int Election::indice2 = 1;

/*	Constructeur	*/
Election::Election()
{
	
	
		
}


/*	 Destructeur	*/
Election::~Election(){}


/*	Méthodes	*/

int Election::vote_candidat(int indice)
{
	/* valeur du vote en fonction de l'image choisi et du choix du candidat	*/
	int pourcentage; 
	if(indice2 == 1 && indice == 1)
		pourcentage = 10;
	else if(indice2 == 1 && indice == 2)
		pourcentage = 5;
	else if(indice2 == 2 && indice == 2)
		pourcentage = 8;
	else 
		pourcentage = -8;
	
	int pt1 = 0;
	int pt2 = 0;
	int a, b, n;
	a = vecteur1.size();
	b = vecteur2.size();
	n = a+b;
	
	/*	Décompte des votes des électeurs	*/
	for(int i(0); i<a; ++i)
	{
		if(vecteur1[i].pt_vote == indice)
			pt1 += 1;
		else
			pt2 +=1;
	}
	
	for(int i(0); i<b; ++i)
	{
		if(vecteur2[i].pt_vote == indice)
			pt1 += 1;
		else
			pt2 +=1;
	}
	
	pourcentage = ( pourcentage + pt1 + pt2)*100;
	pourcentage /= n;
	
	return pourcentage;
			
	
}

