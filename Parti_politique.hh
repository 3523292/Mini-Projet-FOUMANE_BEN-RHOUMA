/************************************************************************************************************************************
                                                    
												Projet FOUMANE Paul et BEN RHOUMA Yassin


*************************************************************************************************************************************/

#pragma once
#include "User.hh"

class Parti_politique: public User{
		protected:
			Parti _part;
			int nbre_electeur;
			
		public:
			Parti_politique();
			Parti_politique(Parti part);
			Parti_politique(Parti_politique const& Parti_politiqueCopie);
			~Parti_politique();
			Parti evaluate()const;
			Parti_politique& operator=(const Parti_politique& parti_politique2);
};
