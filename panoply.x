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



struct list_account{
    struct compte cmpt[250];
    int nbCompte;
};

/* collection management */
/*
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
};*/

struct collection {
    int id_collection;
    char type_collection[50];
    struct article collection_article;
    int nb_articles;
}

struct list_collection {
    struct collection collection[50];
    int nb_different_collection;
};

/* Article management */

struct article {
    int id_article;
    char nom[32];
    int taille[20];
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


/*
enum typeAbo {
    Un_Peu = 1,
    Beaucoup = 2,
    Passionnement = 3,
    A_La_Folie = 4,
    Aucun = 5
};*/

struct abonnement {
    int id_abo;
    char type_abo[30];
    int nb_type_abo;
    int prix_abo;
    int credit_abo;
    struct date date_abonnement;
    int nb_credit_compte;
};

struct list_abonnement{
    struct abonnement abonnements[30];
    int nb_different_abonnement;
};

/* Brand management */
struct brand{
    int id_brand;
    char brand_name[32];
    struct article brand_article_list[124];
    char description[3000];
     
};

struct list_brand{
    struct brand brands[124];
    int nb_different_brand;
};

/* Order management */
struct cart{
    struct article list_article[50];
    int nbArticle;
    int rent_price_credit;
    int rent_price_euros;
    enum point_livraison;
    struct date date_livraison;
    struct date date_rendu; 
};

struct historiqueCommande {
    struct cart listCommande[50];
    int nbCommande;
    int rent_price_credit;
    int rent_price_euros;
    enum point_livraison;
    struct date date_livraison;

};

/*Fonctions*/

program SERVICE_PANOPLY{
    version SERVICE_VERSION_1 {

        /* Function that initialize the database */
        int INIT();                                                         //initialize the database                                    returns 0 or -1 if error

        /* Account functions */
        compte CREATE_ACCOUNT() = 1;                                        //create an account and add it to the database               returns an account
        int LOG_IN(identifiants) = 2;                                       //check if the log in exists                                 returns 0 or -1 if error

        /* Collection functions */
        int LIST_ALL_COLLECTION(list_collection) = 3;                       //display every type of collection                           returns the number of element or -1 if error
        int LIST_ALL_COLLECTION_CLOTHES(list_collection) = 4;               //display every clothes for every type of collection         returns the number of clothes or -1 if error 
        list_collection ADD_CLOTH_TO_COLLECTION(list_collection) = 5;       //add an cloth to a collection                               returns the list of all different collection
        list_collection REMOVE_CLOTH_TO_COLLECTION(list_collection) = 6;    //remove a cloth from a collection                           returns the list of all different collection

        /* Subscription functions */        
        int LIST_TYPE_ABO(list_abonnement) = 7;                             //list every subscription                                    returns the number of element or -1 if error
        compte AFFECTER_ABO_CLIENT(compte) = 8;                             //set the subscription of an account                         returns an account
        compte MODIF_ABO(compte) = 9;                                       //edit account subsciption                                   returns 0 or -1 if error
        list_abonnement ADD_SUBSCRIPTION(list_abonnement) = 10;             //add a new subscription to the list                         returns a subscription
        int DISPLAY_ABONNEMENT(abonnement) = 11;                            //display the number of subscription for every               returns 0 or -1 if error
                                                                            //subscription type 
        /* Article functions */
        article_list ADD_ARTICLE(article_list) = 12;                        //add an article to the list of article                     returns the new list of article
        article_list UPDATE_ARTICLE(article_list) = 13;                     //update the list of articles                               returns the new list of article                         
        article_list DELETE_ARTICLE(article_list) = 14;                     //remove an article from the article list                   returns the new list of article
        int FETCH_ARTICLE(article_list) = 15;                               //get a specified article                                   returns 0 or -1 if error

        /* Brand function */
        int LIST_ALL_BRAND(list_brand) = 16;                                //list every brand                                          returns 0 or -1 if error
        list_brand ADD_BRAND(list_brand) = 17;                              //add a brand to the list                                   returns the new list of brand
        list_brand DELETE_BRAND(list_brand) = 18;                           //remove a brand from a list                                returns the new list of brand
        list_brand UPDATE_BRAND(list_brand) = 19;                           //update a brand from a list                                returns the new list of brand

        /* Order function */
        cart ADD_TO_CART(cart)= 20;                                         //add an article to the cart                                returns the updated cart
        cart RENT(cart) = 21;                                               //rent articles from cart                                   returns an empty cart
        cart REMOVE_FROM_CART(cart)= 22;                                    //remove an article from the cart                           returns the updated cart


    } = 1;
} = 0x20000022;
