/************************************************************************************************************************************
                                                    
											Projet FOUMANE Paul et BEN RHOUMA Yassin


*************************************************************************************************************************************/

#include "Fenetre_choix_image.hh"
#include "Fenetre_identification.hh"
#include "Fenetre_election.hh"

/*	Constructeur	*/
Fenetre_choix_image::Fenetre_choix_image():largeur(300), hauteur(200), retour("RETOUR"), imag1("obama.gif"), imag2("poutine.gif"), 
boiteV(false, 40), boiteBoutonsH2(Gtk::BUTTONBOX_CENTER,50), bouton_im1("IMAGE 1"), bouton_im2("IMAGE 2"), h1(false, 10)
{
	
	//Titre de la fenêtre
	set_title("						*****Choix image*****");
	set_border_width(10);		// Ajouter une bordure de 10px à la fenêtre
	set_default_size(largeur, hauteur);	// Taille de la fenêtre
	this->set_icon_from_file("election.JPG");		//	Icone de la fenetre
	this->set_position(Gtk::WIN_POS_CENTER);	//	Placer la fenêtre au centre
	
	retour.signal_clicked().connect(sigc::mem_fun(*this, &Fenetre_choix_image::bouton_retour2));
	bouton_im1.signal_clicked().connect(sigc::mem_fun(*this, &Fenetre_choix_image::bouton_entrer1));
	bouton_im2.signal_clicked().connect(sigc::mem_fun(*this, &Fenetre_choix_image::bouton_entrer2));

	add(boiteV);	//Ajout de la boîte à la fenêtre.
	
	
	/* Ajout de boutons dans les boîtes */
	h1.pack_start(v1, Gtk::PACK_SHRINK);
    v1.pack_start(imag1, Gtk::PACK_SHRINK);
    v1.pack_start(bouton_im1, Gtk::PACK_SHRINK);
    h1.pack_start(v2, Gtk::PACK_SHRINK);
    v2.pack_start(imag2, Gtk::PACK_SHRINK);
    v2.pack_start(bouton_im2, Gtk::PACK_SHRINK);
    boiteBoutonsH2.pack_start(retour, Gtk::PACK_SHRINK);
    
    
   
   

	/* Ajout des boîtes à la boiteV */
	boiteV.pack_start(boiteBoutonsH); 
	boiteV.pack_start(h1);
	boiteV.pack_end(boiteBoutonsH2);
	
	

	show_all();


}

/*	Destructeur	*/	
Fenetre_choix_image::~Fenetre_choix_image(){}
	
	
/*	Méthodes	*/	

void Fenetre_choix_image::bouton_retour2()
{
    this->hide();
    Fenetre_identification fenetre1;
    Gtk::Main::run(fenetre1);
       
}

void Fenetre_choix_image::bouton_entrer1()
{
    election.indice2 = 1;
    this->hide();
    Fenetre_election fenetre1;
    Gtk::Main::run(fenetre1);
}

void Fenetre_choix_image::bouton_entrer2()
{
    election.indice2 = 2;
    this->hide();
    Fenetre_election fenetre1;
    Gtk::Main::run(fenetre1);
}
