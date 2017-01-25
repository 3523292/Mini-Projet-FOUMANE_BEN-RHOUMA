/************************************************************************************************************************************
                                                    
											Projet FOUMANE Paul et BEN RHOUMA Yassin


*************************************************************************************************************************************/

#include "Fenetre.hh"
#include "Fenetre_resultat.hh"



/*	Constructeur	*/
Fenetre_resultat::Fenetre_resultat(Glib::ustring text1, Glib::ustring text2):
largeur(300), hauteur(200), entrer("MENU"), boiteV(false, 40), boiteBoutonsH(Gtk::BUTTONBOX_CENTER,50),  boiteBoutonsH1(Gtk::BUTTONBOX_CENTER,50), 
_text1(text1), _text2(text2) {
	
	//Titre de la fenêtre
	set_title("*****Résultats*****");
	set_border_width(10);		// Ajouter une bordure de 10px à la fenêtre
	set_default_size(largeur, hauteur);	// Taille de la fenêtre
	this->set_icon_from_file("election.JPG");		//	Icone de la fenetre
	this->set_position(Gtk::WIN_POS_CENTER);	//	Placer la fenêtre au centre
	
	entrer.signal_clicked().connect(sigc::mem_fun(*this, &Fenetre_resultat::bouton_entrer));

	add(boiteV);	//Ajout de la boîte à la fenêtre.
	
	_barreProgression1.set_fraction(pourcentage_vote1);
	_barreProgression1.set_fraction(pourcentage_vote2);
	

	
	
	/* Ajout de boutons dans les boîtes */
    //boiteBoutonsH.pack_start(entrer);
    boiteBoutonsH1.pack_end(entrer);
   
   

	/* Ajout des boîtes à la boiteV */
	boiteV.pack_start(boiteBoutonsH);
	boiteV.pack_start(h1);
	h1.pack_start(b1);
	b1.pack_start(_text1); 
	h1.pack_start(b2);
	b2.pack_start(_barreProgression1);
	boiteV.pack_start(h2);
	h2.pack_start(b3);
	b3.pack_start(_text2); 
	h2.pack_start(b4);
	b4.pack_start(_barreProgression2);
	boiteV.pack_start(_text2);
	boiteV.pack_end(boiteBoutonsH1);
	//boiteV.pack_start(_text, Gtk::PACK_SHRINK)
	

	show_all();


}

/*	Destructeur	*/	
Fenetre_resultat::~Fenetre_resultat(){}
	
	
/*	Méthodes	*/	
void Fenetre_resultat::bouton_entrer()
{
    
    this->hide();
    Fenetre fenetre1;
    Gtk::Main::run(fenetre1);
}



