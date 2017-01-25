/************************************************************************************************************************************
                                                    
											Projet FOUMANE Paul et BEN RHOUMA Yassin


*************************************************************************************************************************************/

#include "Fenetre_mere.hh"

int Fenetre_mere::pourcentage_vote1 = 1;
int Fenetre_mere::pourcentage_vote2 = 1;


/*	Constructeur	*/
Fenetre_mere::Fenetre_mere(): largeur(500), hauteur(400)
{
	//Titre de la fenêtre
	this->set_title("			*****Elections*****");
	this->set_border_width(10);		// Ajouter une bordure de 10px à la fenêtre
	this->set_default_size(largeur, hauteur);	// Taille de la fenêtre
	this->set_icon_from_file("election.JPG");		//	Icone de la fenetre
	this->set_position(Gtk::WIN_POS_CENTER);	//	Placer la fenêtre au centre
   
}

/*	 Destructeur	*/

Fenetre_mere::~Fenetre_mere(){}
