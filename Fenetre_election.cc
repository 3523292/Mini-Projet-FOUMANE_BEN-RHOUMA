/************************************************************************************************************************************
                                                    
											Projet FOUMANE Paul et BEN RHOUMA Yassin


*************************************************************************************************************************************/

#include "Fenetre_election.hh"
#include "Fenetre_resultat.hh"
#include "Fenetre_choix_image.hh"


/*	Constructeur	*/
Fenetre_election::Fenetre_election():largeur(400), hauteur(300),retour("RETOUR"), entrer("ENTRER"), text("Veuillez choisir votre candidat!!!"),
/*imag1("juppe.jpg"), imag2("fillon_opt.jpg"),*/
boiteV(false, 40), boiteBoutonsH2(Gtk::BUTTONBOX_CENTER,50), bouton_im1("IMAGE 1"), bouton_im2("IMAGE 2"), h1(false, 10){
	
	//Titre de la fenêtre
	set_title("		*****Election*****");
	set_border_width(10);		// Ajouter une bordure de 10px à la fenêtre
	set_default_size(largeur, hauteur);	// Taille de la fenêtre
	this->set_icon_from_file("election.JPG");		//	Icone de la fenetre
	this->set_position(Gtk::WIN_POS_CENTER);	//	Placer la fenêtre au centre
	
	retour.signal_clicked().connect(sigc::mem_fun(*this, &Fenetre_election::bouton_retour1));
	entrer.signal_clicked().connect(sigc::mem_fun(*this, &Fenetre_election::entrer1));
	bouton_im1.signal_clicked().connect(sigc::mem_fun(*this, &Fenetre_election::entrer_choix1));
	bouton_im2.signal_clicked().connect(sigc::mem_fun(*this, &Fenetre_election::entrer_choix2));

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
    
    if(election.indice1 == 1)
    {
		imag1.set("juppe.jpg"); 
		imag2.set("fillon_opt.jpg");
	}
	
	if(election.indice1 == 2)
	{
		imag1.set("macron.jpg"); 
		imag2.set("valls.jpg");
	}
    
   
   

	/* Ajout des boîtes à la boiteV */
	boiteV.pack_start(boiteBoutonsH); 
	boiteV.pack_start(h1);
	boiteV.pack_end(boiteBoutonsH2);

	show_all();


}

/*	Destructeur	*/	
Fenetre_election::~Fenetre_election(){}
	
	
/*	Méthodes	*/

void Fenetre_election::bouton_retour1()
{
    this->hide();
    Fenetre_choix_image fenetre1;
    Gtk::Main::run(fenetre1);
}

void Fenetre_election::entrer_choix1()
{
	//this->hide();
	Electeur elect;
	elect.pt_vote = 1;
	election.vecteur2.push_back(elect);
	pourcentage_vote1 = election.vote_candidat(1) ; 
	pourcentage_vote2 = pourcentage_vote1;
	//Fenetre_election fenetre1;
    //Gtk::Main::run(fenetre1);
	
	
}	

void Fenetre_election::entrer_choix2()
{
	//this->hide();
	Electeur elect;
	elect.pt_vote = 2;
	election.vecteur2.push_back(elect);
	pourcentage_vote1 = election.vote_candidat(2); 
	pourcentage_vote2 = pourcentage_vote1;
	//Fenetre_election fenetre1;
    //Gtk::Main::run(fenetre1);
}	



void Fenetre_election::entrer1()
{
	Glib::ustring txt1;
	Glib::ustring txt2;
	
	if(election.indice1 == 1)
	{
		txt1 = "  Alain JUPPE compte :      " ;
		txt2 = "  François FILLON compte :  ";
		this->hide();
		Fenetre_resultat resultat(txt1, txt2);
		Gtk::Main::run(resultat);
	}
	
	if(election.indice1 == 2)
	{
		txt1 = "  Emmanuel MACRON compte :   ";
		txt2 = "  Manuel VALLS compte :      ";
		this->hide();
		Fenetre_resultat resultat(txt1, txt2);
		Gtk::Main::run(resultat);
	}
}	
