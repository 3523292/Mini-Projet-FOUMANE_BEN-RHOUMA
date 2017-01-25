/************************************************************************************************************************************
                                                    
											Projet FOUMANE Paul et BEN RHOUMA Yassin


*************************************************************************************************************************************/

#include "Fenetre_identification.hh"
#include "Fenetre.hh"
#include "Fenetre_choix_image.hh"



/*	Constructeur	*/
Fenetre_identification::Fenetre_identification():largeur(400), hauteur(300),retour("RETOUR"), text("Veuillez vous identifier!"), id("ID"),
entrer("ENTRER"), boiteV(false, 40),boiteBoutonsH(Gtk::BUTTONBOX_CENTER,50), boiteBoutonsH1(Gtk::BUTTONBOX_CENTER,50),
boiteBoutonsH2(Gtk::BUTTONBOX_CENTER,50){
	
	//Titre de la fenêtre
	set_title("		*****Identification*****");
	set_border_width(10);		// Ajouter une bordure de 10px à la fenêtre
	set_default_size(largeur, hauteur);	// Taille de la fenêtre
	this->set_icon_from_file("election.JPG");		//	Icone de la fenetre
	this->set_position(Gtk::WIN_POS_CENTER);	//	Placer la fenêtre au centre
	
	retour.signal_clicked().connect(sigc::mem_fun(*this, &Fenetre_identification::bouton_retour1));
	entrer.signal_clicked().connect(sigc::mem_fun(*this, &Fenetre_identification::entrer_id));
	

	add(boiteV);	//Ajout de la boîte à la fenêtre.

		
	/* Ajout dans la boîte */
	boiteBoutonsH.pack_start(text);
	
	/* Ajout de boutons dans les boîtes */
    boiteBoutonsH1.pack_start(id);
    boiteBoutonsH1.pack_end(text_id);
	boiteBoutonsH2.pack_start(retour);
	boiteBoutonsH2.pack_start(entrer);
   
   

	/* Ajout des boîtes à la boiteV */
	boiteV.pack_start(boiteBoutonsH); 
	boiteV.pack_start(boiteBoutonsH1);
	boiteV.pack_start(boiteBoutonsH2);

	show_all();


}

/*	Destructeur	*/	
Fenetre_identification::~Fenetre_identification(){}
	
	
/*	Méthodes	*/

void Fenetre_identification::bouton_retour1()
{
    this->hide();
    Fenetre fenetre1;
    Gtk::Main::run(fenetre1);
}

void Fenetre_identification::entrer_id()
{
	this->hide();
	//passwd = text_pwd.get_text();
	Fenetre_choix_image election;
	Gtk::Main::run(election);
}	


