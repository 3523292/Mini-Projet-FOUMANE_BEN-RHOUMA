/************************************************************************************************************************************
                                                    
												Projet FOUMANE Paul et BEN RHOUMA Yassin


*************************************************************************************************************************************/

#pragma once
#include "User.hh"

class Candidat: public User{
	protected:
		//const User& _user;
		string _nom;
		string _prenom;
		static int i;
		
	public:
		Parti _part; 
		Reg _region;
		string id;
		static int pt_vote; 	// vaudra 1 si le candidat 1 est choisi et 2 si c'est le candidat 2 qui est choisi
		Candidat();
		//Candidat(User& user);
		//Candidat(Candidat& user2);
		~Candidat();
		void enregistrement(string nom, string prenom, Parti part, Reg region);
		void identification();
		Parti evaluate()const;
	    Reg evaluate2()const;
		void voter(bool& choix);
	
	
};
