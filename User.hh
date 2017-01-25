/************************************************************************************************************************************
                                                    
												Projet FOUMANE Paul et BEN RHOUMA Yassin


*************************************************************************************************************************************/
#pragma once

#include "Personne.hh"

/*	Type énuméré désignant les partis	*/
enum Parti{ 
	D,		// la gauche
	G,		// la Droite
	C,		// le Centre
	P		// pas de parti politique
};

std::ostream& operator<<(std::ostream & out, Parti val);

/*	Type énuméré désignant les égions	*/
enum Reg{ 
	I,		// Ile-de-France
	H,		// Hauts-de-France
	Gr,		// Grang Est
	Pa,		// Pays de la Loire
	O, 		// Occitanie
	A		// autres régions
};

std::ostream& operator<<(std::ostream & out, Reg val);

class User: public Personne{
		
	protected: 
		//string _nom;
		//string _prenom;
		//Parti _part;
		//Reg _region;
		
	public:
		User();
		virtual ~User();
		void identification();
		virtual void enregistrement(string nom, string prenom, Parti part, Reg region);
		virtual Parti evaluate()const = 0;
		virtual Reg evaluate2()const = 0;
		virtual void voter(bool& choix);
		bool operator==(const Parti val){ return (evaluate()==val); };
		bool operator==(const Reg val){ return (evaluate2()==val); };
	
		
};	

