/************************************************************************************************************************************
                                                    
											Projet FOUMANE Paul et BEN RHOUMA Yassin


*************************************************************************************************************************************/

#include "Fenetre_admin.hh"
#include "Fenetre.hh"
#include "Fenetre_choix_election.hh"


/*	Constructeur	*/
Fenetre_admin::Fenetre_admin():largeur(400), hauteur(300),retour1("RETOUR"), suivant("ENTRER"), 
login("Login"), pwd("Password"), boiteV(false, 40),boiteBoutonsH(Gtk::BUTTONBOX_CENTER,50), 
boiteBoutonsH1(Gtk::BUTTONBOX_CENTER,50), boiteBoutonsH2(Gtk::BUTTONBOX_CENTER,50)
{
	
	//Titre de la fenêtre
	set_title("		*****Admin*****");
	set_border_width(10);		// Ajouter une bordure de 10px à la fenêtre
	set_default_size(largeur, hauteur);	// Taille de la fenêtre
	this->set_icon_from_file("election.JPG");		//	Icone de la fenetre
	this->set_position(Gtk::WIN_POS_CENTER);	//	Placer la fenêtre au centre
	
	retour1.signal_clicked().connect(sigc::mem_fun(*this, &Fenetre_admin::bouton_retour));
	suivant.signal_clicked().connect(sigc::mem_fun(*this, &Fenetre_admin::entrer_login));
	

	add(boiteV);	//Ajout de la boîte à la fenêtre.
	
	text_pwd.set_visibility(false);

		
	/* Ajout dans la boîte */
	boiteBoutonsH.pack_start(login);
	boiteBoutonsH.pack_end(text_login);
	
	/* Ajout de boutons dans les boîtes */
    boiteBoutonsH1.pack_start(pwd);
    boiteBoutonsH1.pack_end(text_pwd);
	boiteBoutonsH2.pack_start(retour1);
	boiteBoutonsH2.pack_start(suivant);
   
   

	/* Ajout des boîtes à la boiteV */
	boiteV.pack_start(boiteBoutonsH); 
	boiteV.pack_start(boiteBoutonsH1);
	boiteV.pack_start(boiteBoutonsH2);

	show_all();


}

/*	Destructeur	*/	
Fenetre_admin::~Fenetre_admin(){}
	
	
/*	Méthodes	*/

void Fenetre_admin::bouton_retour()
{
	//Ouverture de la boite de dialogue
	Gtk::MessageDialog dialogue(*this, "Voulez-vous retourner à la page précédente ?", false, Gtk::MESSAGE_QUESTION, Gtk::BUTTONS_YES_NO);
	//Titre de la boîte de dialogue
    dialogue.set_title("Confirmation");
    
    Fenetre fenetre1;
    int resultat = dialogue.run(); //Cette méthode retourne le bouton sur lequel l'utilisateur a cliqué.
    if(resultat == Gtk::RESPONSE_YES) { //S'il a cliqué sur Oui.
		this->hide();
		dialogue.hide();
        Gtk::Main::run(fenetre1);
        dialogue.hide();
        
    }
    else if(resultat == Gtk::RESPONSE_NO) { //S'il a cliqué sur Non.
        dialogue.hide(); //Quitter la  boîte de dialogue
    }
}

void Fenetre_admin::entrer_login()
{
	this->hide();
	this->login1 = text_login.get_text();
	passwd = text_pwd.get_text();
	election.administrateur.identification();
	if (login1 != election.administrateur.login || passwd != election.administrateur.login)
	{
		Gtk::MessageDialog dialogue(*this, "Erreur, veuillez vous identifier!!", false, Gtk::MESSAGE_QUESTION, Gtk::BUTTONS_OK);
		dialogue.set_title("Confirmation");
		int resultat = dialogue.run();
		if(resultat == Gtk::RESPONSE_OK){
			this->hide();
			dialogue.hide();
			Fenetre_admin fenetre1;
			Gtk::Main::run(fenetre1);
			dialogue.hide();
		}
			 
	 }
	 else{ 
		Fenetre_choix_election choix_election;
		Gtk::Main::run(choix_election);
	}
}	

