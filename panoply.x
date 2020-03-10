struct mail {
	char[128] email;
};

struct mot_de_passe{
	char [32] mdp;
};

struct date {
	int jour;
	int mois;
	int année;
};

enum connu_panoply {
	Par_une_amie,
	Une_recherche_en_ligne,
	Un_article_de_presse,
	Aux_galerie_lafayette,
	Sur_les_reseaux_sociaux,
	Autre
};

struct compte {
	struct mail email;
	struct mot_de_passe mdp;
	char[32] nom;
	char[32] prenom;
	struct date date_de_naissance;
	int telephone;
	char[64] profession;
	char[32] pays;
	char[6] code_promo;
	connu_panoply connaissance;
	
};

struct historiqueCommande {
    commande listCommande[50];
    int nbCommande;
};


program SERVICE_PANOPLY{
    version SERVICE_VERSION_1 {
        compte CREATE_ACCOUNT() = 1;
        
    } = 1;
} = 0x20000022;
