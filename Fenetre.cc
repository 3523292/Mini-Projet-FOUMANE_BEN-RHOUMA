/************************************************************************************************************************************
                                                    
						Projet FOUMANE Paul et BEN RHOUMA Yassin


*************************************************************************************************************************************/

#include "Fenetre.hh"
#include "Fenetre_admin.hh"
#include "Fenetre_user.hh"
#include "Fenetre_identification.hh"


/*	Constructeur	*/
Fenetre::Fenetre():largeur(500), hauteur(400),flag("france_opt.jpg"), polytech("polytech_opt.jpg"), 
fermer("QUITTER"), admin("ADMIN"), user("USER"), voter("VOTER"), boiteV(false, 40),
boiteBoutonsH(Gtk::BUTTONBOX_CENTER,50), boiteBoutonsH1(Gtk::BUTTONBOX_CENTER,50), boiteBoutonsH2(Gtk::BUTTONBOX_CENTER,50)
{
	
	//Titre de la fenêtre
	set_title("			*****Elections*****");
	set_border_width(10);		// Ajouter une bordure de 10px à la fenêtre
	set_default_size(largeur, hauteur);	// Taille de la fenêtre
	set_icon_from_file("election.JPG");		//	Icone de la fenetre
	set_position(Gtk::WIN_POS_CENTER);	//	Placer la fenêtre au centre
	fermer.signal_clicked().connect(sigc::mem_fun(*this, &Fenetre::bouton_quitter));	// Fermeture de la fenêtre par un clic sur le bouton
	
	admin.signal_clicked().connect(sigc::mem_fun(*this, &Fenetre::bouton_admin));	// Ouverture de la fenêtre pae un clic sur le bouton
	
	user.signal_clicked().connect(sigc::mem_fun(*this, &Fenetre::bouton_user));	// Ouverture de la fenêtre pae un clic sur le bouton
	
	voter.signal_clicked().connect(sigc::mem_fun(*this, &Fenetre::bouton_voter));	// Ouverture de la fenêtre pae un clic sur le bouton

	add(boiteV);	//Ajout de la boîte à la fenêtre.
		
	/* Ajout de boutons dans les boîtes */
	boiteBoutonsH.pack_start(polytech);
	boiteBoutonsH.pack_end(flag, Gtk::PACK_SHRINK);
	
	/* Ajout de boutons dans les boîtes */
    boiteBoutonsH1.pack_start(admin);
    boiteBoutonsH1.pack_start(user);
	boiteBoutonsH2.pack_start(voter);
   

	/* Ajout des boîtes à la boiteV */
	boiteV.pack_start(boiteBoutonsH); 
	boiteV.pack_start(boiteBoutonsH1);
	boiteV.pack_start(boiteBoutonsH2);
	
	boiteV.pack_end(fermer);

	show_all();


}

/*	Destructeur	*/	
Fenetre::~Fenetre(){}
	
	
/*	Méthodes	*/

void Fenetre::bouton_quitter()
{
	//Ouverture de la boite de dialogue
	Gtk::MessageDialog dialogue(*this, "Voulez-vous quitter le programme ?", false, Gtk::MESSAGE_QUESTION, Gtk::BUTTONS_YES_NO);
	//Titre de la boîte de dialogue
    dialogue.set_title("Confirmation");
    // Ajouter un texte secondaire
    dialogue.set_secondary_text("Si vous répondez Oui, l'élection s'arrêtera!!!");
    
    int resultat = dialogue.run(); //Cette méthode retourne le bouton sur lequel l'utilisateur a cliqué.
    if(resultat == Gtk::RESPONSE_YES) { //S'il a cliqué sur Oui.
        Gtk::Main::quit();
    }
    else if(resultat == Gtk::RESPONSE_NO) { //S'il a cliqué sur Non.
        dialogue.hide(); //Quitter la  boîte de dialogue
    }
}

void Fenetre::bouton_admin()
{
	this->hide();
	Fenetre_admin admin;
	Gtk::Main::run(admin);
}

void Fenetre::bouton_user()
{
	this->hide();
	Fenetre_user user;
	Gtk::Main::run(user);
}

void Fenetre::bouton_voter()
{
	this->hide();
	Fenetre_identification id;
	Gtk::Main::run(id);
}


