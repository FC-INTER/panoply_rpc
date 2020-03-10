/* account management */
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
    int id_compte;
	struct mail email;
	struct mot_de_passe mdp;
	char nom[32];
	char prenom[32];
	struct date date_de_naissance;
	int telephone;
	char profession[64];
	char pays[32];
	char code_promo[6];
	enum connu_panoply connaissance;
    struct abonnement abonnement_suivi;
};

struct historiqueCommande {
    commande listCommande[50];
    int nbCommande;
};

struct list_account{
    struct compte cmpt[250];
    int nbCompte;
};

/* collection management */

enum type_collection {
    nouveautes = 1,
    combis_et_smoking = 2,
    robes_minis = 3,
    robes_mi_longues = 4,
    robes_longues = 5,
    robes_longues_soir = 6,
    sweats_et_mailles = 7,
    tops = 8,
    jupes = 9,
    pantalons_et_shorts = 10,
    vestes = 11,
    manteaux = 12,
    bijoux = 13,
    sacs = 14
};

struct collection {
    int id_collection;
    enum type_collection type;
    struct article collection_article;
    int nb_articles;
}

/* Article management */

struct article {
    int id_article;
    char nom[32];
    int taille;
    enum point_livraison;
    struct date date_livraison;
    int location;
    int prix_achat;
    int prix_location;
    enum type_collection;
    enum marque;
    int credit;
    int stock;
};

struct article_list{
    struct article article[150];
    int nb_different_article;
};

/* Subscription management */

enum connu_panoply {
	Par_une_amie,
	Une_recherche_en_ligne,
	Un_article_de_presse,
	Aux_galerie_lafayette,
	Sur_les_reseaux_sociaux,
	Autre
};

enum typeAbo {
    Un_Peu = 1,
    Beaucoup = 2,
    Passionnement = 3,
    A_La_Folie = 4,
    Aucun = 5
};

struct abonnement {
    int abo_id;
    char type_abo[30];
    int nb_type_abo;
    int prix_abo;
    int credit_abo;
    struct date date_abonnement;
    int nb_credit_compte;
};


/* Brand management */
struct brand{
    
};


/* Order management */
struct order{

};
/*Fonctions*/

program SERVICE_PANOPLY{
    version SERVICE_VERSION_1 {

        /* Function that initialize the database */
        int INIT();                                         //initialize the database                                    returns 0 or -1 if error

        /* Account functions */
        compte CREATE_ACCOUNT() = 1;                        //create an account and add it to the database               returns an account
        int LOG_IN(identifiants) = 2;                       //check if the log in exists                                 returns 0 or -1 if error

        /* Collection functions */
        int LIST_COLLECTION(type_collection) = 3;               //display every type of collection                           returns the number of element or -1 if error
        int LIST_COLLECTION_CLOTHES(collection) = 4;            //display every clothes for every type of collection         returns the number of clothes or -1 if error 
        int ADD_CLOTH_TO_COLLECTION(collection) = 5;            //add an cloth to a collection                               returns 0 or -1 if error 
        int REMOVE_CLOTH_TO_COLLECTION(collection) = 6;         //remove a cloth from a collection                           returns 0 or -1 if error

        /* Subscription functions */        
        int LIST_TYPE_ABO(void) = 7;                       //list every subscription                                    returns the number of element or -1 if error
        compte AFFECTER_ABO_CLIENT(compte) = 8;            //set the subscription of an account                         returns an account
        int MODIF_ABO(compte) = 9;                         //edit account                                               returns 0 or -1 if error
        abonnement REMOVE_SUBSCRIPTION(comtpe) = 10;         //add a new subscription to the list                         returns a subscription
        int DISPLAY_ABONNEMENT(abonnement) = 11;            //display the number of subscription for every               returns 0 or -1 if error
                                                            //subscription type 
        /* Article functions */
        article_list ADD_ARTICLE(article_list) = 12;        //add an article to the list of article                     returns the new list of article
        article_list UPDATE_ARTICLE(article_list) = 13;     //update the list of articles                               returns the new list of article                         
        article_list DELETE_ARTICLE(article_list) = 14;     //remove an article from the article list                   returns the new list of article
        int FETCH_ARTICLE(article_list) = 15;               //get a specified article                                   returns 0 or -1 if error

        /* Brand function */
        LIST_BRAND() = 16;
        ADD_BRAND() = 17;
        DELETE_BRAND() = 18;
        UPDATE_BRAND() = 19;

        /* Order function */
        ADD_TO_CART()= 20;
        RENT() = 21;
        BUY() = 22;
        REMOVE_FROM_CART()= 23;


    } = 1;
} = 0x20000022;
