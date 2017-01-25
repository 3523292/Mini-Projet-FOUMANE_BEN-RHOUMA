/************************************************************************************************************************************
                                                    
											Projet FOUMANE Paul et BEN RHOUMA Yassin


*************************************************************************************************************************************/

#include "Fenetre_user.hh"
#include "Fenetre.hh"
#include "Fenetre_info1.hh"



/*	Constructeur	*/
Fenetre_user::Fenetre_user():largeur(400), hauteur(300),retour("RETOUR"), entrer("ENTRER"), text("Veuillez vous Enregistrer!"), 
login("Nom"), pwd("Prenom"), boiteV(false, 40),boiteBoutonsH(Gtk::BUTTONBOX_CENTER,50), boiteBoutonsH1(Gtk::BUTTONBOX_CENTER,50), 
boiteBoutonsH2(Gtk::BUTTONBOX_CENTER,50), b1(false,10), h1(false,10), h2(false,10){
	
	//Titre de la fenêtre
	set_title("		*****User*****");
	set_border_width(10);		// Ajouter une bordure de 10px à la fenêtre
	set_default_size(largeur, hauteur);	// Taille de la fenêtre
	this->set_icon_from_file("election.JPG");		//	Icone de la fenetre
	this->set_position(Gtk::WIN_POS_CENTER);	//	Placer la fenêtre au centre
	retour.signal_clicked().connect(sigc::mem_fun(*this, &Fenetre_user::bouton_retour1));
	entrer.signal_clicked().connect(sigc::mem_fun(*this, &Fenetre_user::entrer_login1));
	
	//Ajout de texte à la liste déroulante.
	liste_parti.append("Pas de parti");
	liste_parti.set_active_text("Pas de parti");
    liste_parti.append("Centre");
    liste_parti.append("Droite");
    liste_parti.append("Gauche");
    liste_parti.append("Autre");
    
    
    //Ajout de texte à la liste déroulante.
    liste_region.append("Ile-de-France");
    liste_region.set_active_text("Ile-de-France");
    liste_region.append("Hauts-de-France");
    liste_region.append("Grand Est");
    liste_region.append("Pays de la Loire");
	liste_region.append("Occitanie");
	liste_region.append("Autre");

	add(boiteV);	//Ajout de la boîte à la fenêtre.
	

		
	/* Ajout dans la boîte */
	boiteBoutonsH.pack_start(login);
	boiteBoutonsH.pack_end(text_login);
	b1.pack_start(h1);
	h1.pack_start(liste_parti);
	b1.pack_start(h2);
	h2.pack_start(liste_region);
	
	/* Ajout de boutons dans les boîtes */
    boiteBoutonsH1.pack_start(pwd);
    boiteBoutonsH1.pack_end(text_pwd);
	boiteBoutonsH2.pack_start(retour);
	boiteBoutonsH3.pack_start(text);
	boiteBoutonsH2.pack_end(entrer);
   

	/* Ajout des boîtes à la boiteV */
	boiteV.pack_start(boiteBoutonsH3);
	boiteV.pack_start(boiteBoutonsH); 
	boiteV.pack_start(boiteBoutonsH1);
	boiteV.pack_start(b1);
	boiteV.pack_start(boiteBoutonsH2);

	show_all();


}

/*	Destructeur	*/	
Fenetre_user::~Fenetre_user(){}
	
	
/*	Méthodes	*/

void Fenetre_user::bouton_retour1()
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

void Fenetre_user::entrer_login1()
{
	//this->hide();
	//Fenetre_info1 info;
	//Gtk::Main::run(info);
	
	this->hide();
	Glib::ustring txt;
	nom = text_login.get_text();
	prenom = text_pwd.get_text();
	parti = liste_parti.get_active_text();
	region = liste_region.get_active_text();
	
	Gtk::MessageDialog dialogue(*this, "Etes-vous un Candidat?", false, Gtk::MESSAGE_QUESTION, Gtk::BUTTONS_YES_NO);
	dialogue.set_title("Confirmation");
	
	int resultat = dialogue.run();
	if(resultat == Gtk::RESPONSE_YES) { //S'il a cliqué sur Oui.
		
		Candidat cand;
		cand.enregistrement(nom, prenom, D, I);
		txt = nom +" "+ prenom + ", votre identifiant est: "+ cand.id;
		election.vecteur1.push_back(cand);
		this->hide();
		Fenetre_info1 info(txt);
		dialogue.hide();
        Gtk::Main::run(info);
        
        
    }
    else if(resultat == Gtk::RESPONSE_NO) { //S'il a cliqué sur Non.
        Electeur elect;
		elect.enregistrement(nom, prenom, P, A);
		txt = nom +" "+ prenom + ", votre identifiant est: "+ elect.id;
		election.vecteur2.push_back(elect);
		this->hide();
		dialogue.hide();
		Fenetre_info1 info(txt);
        Gtk::Main::run(info);
        dialogue.hide();
        
    }
}	



