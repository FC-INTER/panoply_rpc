struct mail {
	char email[128] ;
};

struct mot_de_passe{
	char mdp[32] ;
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

struct identifiants{
	struct mail email;
	struct mot_de_passe mdp;
};

struct compte {
	struct mail email;
	struct mot_de_passe mdp;
	char nom[32];
	char prenom[32];
	struct date date_de_naissance;
	int telephone;
	char profession[64];
	char pays[32];
	char code_promo[6];
	connu_panoply connaissance;
};

struct historiqueCommande {
    commande listCommande[50];
    int nbCommande;
};



struct article {
    char type[50]
};


program SERVICE_PANOPLY{
    version SERVICE_VERSION_1 {
        compte CREATE_ACCOUNT() = 1;
        int LOG_IN(identifiants) = 2;
        article BUY() = 3;
        article RENT() = 4;
        
    } = 1;
} = 0x20000022;
