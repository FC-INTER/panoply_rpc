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
/* collection management */

struct collection {
    int id_collection;
    char nom_collection[50];
    struct article collection_article;
    int nb_articles;
};

struct list_collection {
    struct collection collection[50];
    int nb_different_collection;
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
    struct date date_livraison;
    int location;
    int prix_location;
    enum collection collection_reference;
    enum brand brand_reference;
    int credit;
    int stock;
};

struct article_list{
    struct article article[150];
    int nb_different_article;
};
/*-------------------------------------------*/
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
/*Fonctions*/

program SERVICE_PANOPLY{
    version SERVICE_VERSION_1 {

        /* Function that initialize the database */
        panoply INIT(panoply) = 1;                                          /*initialize the database                                    returns the initialised database */

        /* Account functions */
        compte CREATE_ACCOUNT() = 2;                                        /*create an account and add it to the database               returns an account */
        int LOG_IN(identifiants) = 3;                                       /*check if the log in exists                                 returns 0 or -1 if error */

        /* Collection functions */
        int LIST_ALL_COLLECTION(list_collection) = 4;                       /*display every type of collection                           returns the number of element or -1 if error */
        int LIST_ALL_COLLECTION_CLOTHES(list_collection) = 5;               /*display every clothes for every type of collection         returns the number of clothes or -1 if error */
        list_collection ADD_CLOTH_TO_COLLECTION(list_collection) = 6;       /*add an cloth to a collection                               returns the list of all different collection */
        list_collection REMOVE_CLOTH_TO_COLLECTION(list_collection) = 7;    /*remove a cloth from a collection                           returns the list of all different collection */

        /* Subscription functions */        
        int LIST_TYPE_ABO(list_abonnement) = 8;                             /*list every subscription                                    returns the number of element or -1 if error */
        compte AFFECTER_ABO_CLIENT(compte) = 9;                             /*set the subscription of an account                         returns an account */
        compte MODIF_ABO(compte) = 10;                                      /*edit account subsciption                                   returns 0 or -1 if error */
        list_abonnement ADD_SUBSCRIPTION(list_abonnement) = 11;             /*add a new subscription to the list                         returns a subscription */
        int DISPLAY_ABONNEMENT(abonnement) = 12;                            /*display the number of subscription for every               returns 0 or -1 if error */
                                                                            /*subscription type 
        /* Article functions */
        article_list ADD_ARTICLE(article_list) = 13;                        /*add an article to the list of article                     returns the new list of article */
        article_list UPDATE_ARTICLE(article_list) = 14;                     /*update the list of articles                               returns the new list of article */                        
        article_list DELETE_ARTICLE(article_list) = 15;                     /*remove an article from the article list                   returns the new list of article */
        int FETCH_ARTICLE(article_list) = 16;                               /*get a specified article                                   returns 0 or -1 if error */

        /* Brand function */
        int LIST_ALL_BRAND(list_brand) = 17;                                /*list every brand                                          returns 0 or -1 if error */
        list_brand ADD_BRAND(list_brand) = 18;                              /*add a brand to the list                                   returns the new list of brand */
        list_brand DELETE_BRAND(list_brand) = 19;                           /*remove a brand from a list                                returns the new list of brand */ 
        list_brand UPDATE_BRAND(list_brand) = 20;                           /*update a brand from a list                                returns the new list of brand */

        /* Order function */
        cart ADD_TO_CART(cart)= 21;                                         /*add an article to the cart                                returns the updated cart */
        cart RENT(cart) = 22;                                               /*rent articles from cart                                   returns an empty cart */
        cart REMOVE_FROM_CART(cart)= 23;                                    /*remove an article from the cart                           returns the updated cart */


    } = 1;
} = 0x20646464;
