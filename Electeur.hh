/************************************************************************************************************************************
                                                    
												Projet FOUMANE Paul et BEN RHOUMA Yassin


*************************************************************************************************************************************/

#pragma once

#include "User.hh"

class Electeur: public User{
	protected:
		//const User& _user;
		string _nom;
		string _prenom;
		static int i;
		
	public:
		Parti _part; 
		Reg _region;
		string id;
		static int pt_vote; 	// vaudra 1 si l'électeur choisi le candidat 1 et 2 si c'est le candidat 2 qui est choisi
		Electeur();
		//Electeur(User& user);
		//Electeur(Electeur& user2);
		~Electeur();
		void enregistrement(string nom, string prenom, Parti part, Reg region);
		void identification();
		Parti evaluate()const;
	    Reg evaluate2()const;
		void voter(bool& choix);
	
	
};
