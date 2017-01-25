/************************************************************************************************************************************
                                                    
											Projet FOUMANE Paul et BEN RHOUMA Yassin


*************************************************************************************************************************************/

#include "Fenetre.hh"
#include "Fenetre_info1.hh"


/*	Constructeur	*/
Fenetre_info1::Fenetre_info1(Glib::ustring text):largeur(300), hauteur(200), entrer("MENU"), 
boiteV(false, 40),boiteBoutonsH(Gtk::BUTTONBOX_CENTER,50), _text(text){
	
	//Titre de la fenêtre
	set_title("*****Informations*****");
	set_border_width(10);		// Ajouter une bordure de 10px à la fenêtre
	set_default_size(largeur, hauteur);	// Taille de la fenêtre
	this->set_icon_from_file("election.JPG");		//	Icone de la fenetre
	this->set_position(Gtk::WIN_POS_CENTER);	//	Placer la fenêtre au centre
	
	entrer.signal_clicked().connect(sigc::mem_fun(*this, &Fenetre_info1::bouton_menu));

	add(boiteV);	//Ajout de la boîte à la fenêtre.
	
	
	/* Ajout de boutons dans les boîtes */
    //boiteBoutonsH.pack_start(imag1);
    boiteBoutonsH1.pack_start(entrer);
   
   

	/* Ajout des boîtes à la boiteV */
	boiteV.pack_start(boiteBoutonsH);
	boiteV.pack_start(_text);
	boiteV.pack_start(boiteBoutonsH1);
	
	

	show_all();


}

/*	Destructeur	*/	
Fenetre_info1::~Fenetre_info1(){}
	
	
/*	Méthodes	*/	
void Fenetre_info1::bouton_menu()
{
    
    this->hide();
    Fenetre fenetre1;
    Gtk::Main::run(fenetre1);
}

