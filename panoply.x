/*account management*/
enum connu_panoply {
	Par_une_amie = 1,
	Une_recherche_en_ligne = 2,
	Un_article_de_presse = 3,
	Aux_galerie_lafayette = 4,
	Sur_les_reseaux_sociaux = 5,
	Autre = 6
};

struct mail {
	char email[128] ;
};

struct mot_de_passe{
	char mdp[32] ;
};

struct date {
	int jour;
	int mois;
	int annee;
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


/*collection management*/

enum type_collection {
    enum nouveautes = 1,
    enum combis_et_smoking = 2,
    enum robes_minis = 3,
    enum robes_mi_longues = 4,
    enum robes_longues = 5,
    enum robes_longues_soir = 6,
    enum sweats_et_mailles = 7,
    enum tops = 8,
    enum jupes = 9,
    enum pantalons_et_shorts = 10,
    enum vestes = 11,
    enum manteaux = 12,
    enum bijoux = 13,
    enum sacs = 14
};

/* Article management */

struct article {
    int id;
    char nom[32];
    int taille;
    enum point_livraison;
    struct date;
    int location;
    int prix_achat;
    int prix_location;
    enum type_collection;
    enum marque;
    int credit;
};

/*Fonctions*/

program SERVICE_PANOPLY{
    version SERVICE_VERSION_1 {
        compte CREATE_ACCOUNT() = 1;
        int LOG_IN(identifiants) = 2;
        article BUY() = 3;
        article RENT() = 4;
        
    } = 1;
} = 0x20000022;
