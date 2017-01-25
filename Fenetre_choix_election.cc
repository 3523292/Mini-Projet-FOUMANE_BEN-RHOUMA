/************************************************************************************************************************************
                                                    
											Projet FOUMANE Paul et BEN RHOUMA Yassin


*************************************************************************************************************************************/

#include "Fenetre.hh"
#include "Fenetre_choix_election.hh"
#include "Fenetre_admin.hh"

/*	Constructeur	*/
Fenetre_choix_election::Fenetre_choix_election():largeur(300), hauteur(200),
entrer("MENU"), retour("RETOUR"), imag1("droite_opt.jpg"), imag2("gauche.png"), boiteV(false, 40),
boiteBoutonsH2(Gtk::BUTTONBOX_CENTER,50), bouton_im1("IMAGE 1"), bouton_im2("IMAGE 2"), h1(false, 10){
	
	//Titre de la fenêtre
	set_title("*****Choix des élections*****");
	set_border_width(10);		// Ajouter une bordure de 10px à la fenêtre
	set_default_size(largeur, hauteur);	// Taille de la fenêtre
	this->set_icon_from_file("election.JPG");	//	Icone de la fenetre
	this->set_position(Gtk::WIN_POS_CENTER);	//	Placer la fenêtre au centre
	
	retour.signal_clicked().connect(sigc::mem_fun(*this, &Fenetre_choix_election::bouton_retour2));
	entrer.signal_clicked().connect(sigc::mem_fun(*this, &Fenetre_choix_election::bouton_menu));
	bouton_im1.signal_clicked().connect(sigc::mem_fun(*this, &Fenetre_choix_election::entrer_choix1));
	bouton_im2.signal_clicked().connect(sigc::mem_fun(*this, &Fenetre_choix_election::entrer_choix2));

	add(boiteV);	//Ajout de la boîte à la fenêtre.
	
	
	/* Ajout de boutons dans les boîtes */
	boiteBoutonsH.pack_start(text, Gtk::PACK_SHRINK);
	h1.pack_start(v1, Gtk::PACK_SHRINK);
    v1.pack_start(imag1, Gtk::PACK_SHRINK);
    v1.pack_start(bouton_im1, Gtk::PACK_SHRINK);
    h1.pack_start(v2, Gtk::PACK_SHRINK);
    v2.pack_start(imag2, Gtk::PACK_SHRINK);
    v2.pack_start(bouton_im2, Gtk::PACK_SHRINK);
    boiteBoutonsH2.pack_start(retour, Gtk::PACK_SHRINK);
    boiteBoutonsH2.pack_end(entrer, Gtk::PACK_SHRINK);
    
    
   
   

	/* Ajout des boîtes à la boiteV */
	boiteV.pack_start(boiteBoutonsH); 
	boiteV.pack_start(h1);
	boiteV.pack_end(boiteBoutonsH2);

	show_all();
	

	show_all();


}

/*	Destructeur	*/	
Fenetre_choix_election::~Fenetre_choix_election(){}
	
	
/*	Méthodes	*/

void Fenetre_choix_election::bouton_menu()
{
	this->hide();
	Fenetre fenetre2;
	Gtk::Main::run(fenetre2);
}	

void Fenetre_choix_election::bouton_retour2()
{
    this->hide();
    Fenetre_admin fenetre1;
    Gtk::Main::run(fenetre1);
       
}

void Fenetre_choix_election::entrer_choix1()
{
	//this->hide();
	election.indice1 = 1;
}	

void Fenetre_choix_election::entrer_choix2()
{
	//this->hide();
	election.indice1 = 2;
	
}	
