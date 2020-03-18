/* Subscription management */

struct abonnement {
    int id_abo;
    char type_abo[30];
    int prix_abo;
    int credit_abo;
};

struct list_abonnement{
    struct abonnement abonnements[30];
    int nb_different_abonnement;
};

/*-------------------------------------------*/
/* collection management */

struct collection {
    int id_collection;
    char nom_collection[50];
};

struct list_collection {
    struct collection collection[50];
    int nb_different_collection;
};
/*-------------------------------------------*/
/* Brand management */

struct brand{
    int id_brand;
    char brand_name[32];
    char description[3000];
};

struct list_brand{
    struct brand brands[124];
    int nb_different_brand;
};

/*-------------------------------------------*/
/* Article management */

enum point_livraison{
    Paris_Neuilly_Boulogne = 1,
    Rest_of_France = 2,
    Belgium = 3,
    UK = 4
};

struct article {
    int id_article;
    char nom[32];
    int taille[20];
    enum point_livraison pt_livraison;
    int prix_location;
    struct collection collection_reference;
    struct brand brand_reference;
    int credit;
    int stock;
};

struct article_list{
    struct article article[150];
    int nb_different_article;
};
/*-------------------------------------------*/
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
    int nb_credit;
	enum connu_panoply connaissance;
    struct list_abonnement abonnement_suivi;
    struct date date_abonnement;
};

struct list_account{
    struct compte cmpt[250];
    int nbCompte;
};

/*-------------------------------------------*/

/* Order management */
struct cart{
    struct article list_article[50];
    int nbArticle;
    int rent_price_credit;
    int rent_price_euros;
    enum point_livraison pt_livraison;
    struct date date_livraison;
    struct date date_rendu; 
};

struct historiqueCommande {
    struct cart listCommande[50];
    int nbCommande;
};
/*-------------------------------------------*/
/*database*/
struct panoply {
    struct list_account comptes;
    struct list_collection collections;
    struct article_list articles;
    struct list_abonnement abonnements;
    struct list_brand marques;
    struct historiqueCommande commandes;
};

/*-------------------------------------------*/
/*Fonctions*/

program SERVICE_PANOPLY{
    version SERVICE_VERSION_1 {
        /* Function that initialize the database */
        panoply INIT(panoply) = 1;                                          /*initialize the database                                    returns the initialised database */

        /* Account functions */
        compte CREATE_ACCOUNT(panoply) = 2;                                 /*create an account and add it to the database               returns an account */
        int LOG_IN(panoply) = 3;                                            /*check if the log in exists                                 returns the account id or -1 if error */

        /* Collection functions */
        int LIST_ALL_COLLECTION(panoply) = 4;                               /*display every type of collection                           returns the number of element or -1 if error */
        int LIST_ALL_COLLECTION_CLOTHES(panoply) = 5;                       /*display every clothes for every type of collection         returns the number of clothes or -1 if error */
        panoply ADD_CLOTH_TO_COLLECTION(panoply) = 6;                       /*add a cloth to a collection                               returns the list of all different collection */
        panoply REMOVE_CLOTH_TO_COLLECTION(panoply) = 7;                    /*remove a cloth from a collection                           returns the list of all different collection */

        /* Subscription functions */        
        int LIST_TYPE_ABO(panoply) = 8;                                     /*list every subscription                                    returns the number of element or -1 if error */
        panoply AFFECTER_ABO_CLIENT(panoply) = 9;                           /*set the subscription of an account                         returns an account */
        panoply MODIF_ABO(panoply) = 10;                                    /*edit account subsciption                                   returns 0 or -1 if error */
        panoply ADD_SUBSCRIPTION(panoply) = 11;                             /*add a new subscription to the list                         returns a subscription */
        int DISPLAY_ABONNEMENT(panoply) = 12;                               /*display the number of subscription for every               returns 0 or -1 if error */
                                                                            /*subscription type 
        /* Article functions */
        panoply ADD_ARTICLE(panoply) = 13;                                  /*add an article to the list of article                     returns the new list of article */
        panoply UPDATE_ARTICLE(panoply) = 14;                               /*update the list of articles                               returns the new list of article */                        
        panoply DELETE_ARTICLE(panoply) = 15;                               /*remove an article from the article list                   returns the new list of article */
        int FETCH_ARTICLE(panoply) = 16;                                    /*get a specified article                                   returns 0 or -1 if error */

        /* Brand function */
        int LIST_ALL_BRAND(panoply) = 17;                                   /*list every brand                                          returns 0 or -1 if error */
        panoply ADD_BRAND(panoply) = 18;                                    /*add a brand to the list                                   returns the new list of brand */
        panoply DELETE_BRAND(panoply) = 19;                                 /*remove a brand from a list                                returns the new list of brand */ 
        panoply UPDATE_BRAND(panoply) = 20;                                 /*update a brand from a list                                returns the new list of brand */

        /* Order function */
        void LIST_ALL_CART(cart)=21;                                        /*list all article of your cart                             returne the updated cart*/
        panoply ADD_TO_CART(panoply)= 22;                                   /*add an article to the cart                                returns the updated cart */
        panoply RENT(panoply) = 23;                                         /*rent articles from cart                                   returns an empty cart */
        cart REMOVE_FROM_CART(cart)= 24;                                    /*remove an article from the cart                           returns the updated cart */


    } = 1;
} = 0x20646464;
