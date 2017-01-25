/************************************************************************************************************************************
                                                    
												Projet FOUMANE Paul et BEN RHOUMA Yassin


*************************************************************************************************************************************/

#pragma once
#include "User.hh"
#include "Candidat.hh"
#include "Electeur.hh"
#include "Admin.hh"
#include "Parti_politique.hh"
#include "Region.hh"
#include <vector>
#include <map>

class Election{
		public:
			Admin administrateur; 
			std::vector<Candidat> vecteur1;	//	Tableau de candidat
			std::vector<Electeur> vecteur2;	//	Tableau d'électeur
			std::map<Parti,int> partis;
			std::map<Reg,int> region;
			static int indice1;	//	pour indiquer quelle est la primaire choisie 
			static int indice2;	//	pour indiquer quelle est l'image choisie avant le vote
			
			
			
		public:
			Election();
			~Election();
			int vote_candidat(int indice);
			
			
			
};
