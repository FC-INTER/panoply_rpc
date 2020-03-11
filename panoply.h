/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _PANOPLY_H_RPCGEN
#define _PANOPLY_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct panoply {
	struct list_account comptes;
	struct list_collection collections;
	struct article_list articles;
	struct list_abonnement abonnements;
	struct list_brand marques;
	struct historiqueCommande commandes;
};
typedef struct panoply panoply;

enum connu_panoply {
	Par_une_amie = 1,
	Une_recherche_en_ligne = 2,
	Un_article_de_presse = 3,
	Aux_galerie_lafayette = 4,
	Sur_les_reseaux_sociaux = 5,
	Autre = 6,
};
typedef enum connu_panoply connu_panoply;

struct mail {
	char email[128];
};
typedef struct mail mail;

struct mot_de_passe {
	char mdp[32];
};
typedef struct mot_de_passe mot_de_passe;

struct date {
	int jour;
	int mois;
	int annee;
};
typedef struct date date;

struct identifiants {
	struct mail email;
	struct mot_de_passe mdp;
};
typedef struct identifiants identifiants;

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
typedef struct compte compte;

struct list_account {
	struct compte cmpt[250];
	int nbCompte;
};
typedef struct list_account list_account;

struct collection {
	int id_collection;
	char nom_collection[50];
	struct article collection_article;
	int nb_articles;
};
typedef struct collection collection;

struct list_collection {
	struct collection collection[50];
	int nb_different_collection;
};
typedef struct list_collection list_collection;

enum point_livraison {
	Paris_Neuilly_Boulogne = 1,
	Rest_of_France = 2,
	Belgium = 3,
	UK = 4,
};
typedef enum point_livraison point_livraison;

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
typedef struct article article;

struct article_list {
	struct article article[150];
	int nb_different_article;
};
typedef struct article_list article_list;

struct abonnement {
	int id_abo;
	char type_abo[30];
	int prix_abo;
	int credit_abo;
};
typedef struct abonnement abonnement;

struct list_abonnement {
	struct abonnement abonnements[30];
	int nb_different_abonnement;
};
typedef struct list_abonnement list_abonnement;

struct brand {
	int id_brand;
	char brand_name[32];
	struct article brand_article_list[124];
	char description[3000];
};
typedef struct brand brand;

struct list_brand {
	struct brand brands[124];
	int nb_different_brand;
};
typedef struct list_brand list_brand;

struct cart {
	struct article list_article[50];
	int nbArticle;
	int rent_price_credit;
	int rent_price_euros;
	enum point_livraison pt_livraison;
	struct date date_livraison;
	struct date date_rendu;
};
typedef struct cart cart;

struct historiqueCommande {
	struct cart listCommande[50];
	int nbCommande;
};
typedef struct historiqueCommande historiqueCommande;

#define SERVICE_PANOPLY 0x20646464
#define SERVICE_VERSION_1 1

#if defined(__STDC__) || defined(__cplusplus)
#define INIT 1
extern  panoply * init_1(panoply *, CLIENT *);
extern  panoply * init_1_svc(panoply *, struct svc_req *);
#define CREATE_ACCOUNT 2
extern  compte * create_account_1(void *, CLIENT *);
extern  compte * create_account_1_svc(void *, struct svc_req *);
#define LOG_IN 3
extern  int * log_in_1(identifiants *, CLIENT *);
extern  int * log_in_1_svc(identifiants *, struct svc_req *);
#define LIST_ALL_COLLECTION 4
extern  int * list_all_collection_1(list_collection *, CLIENT *);
extern  int * list_all_collection_1_svc(list_collection *, struct svc_req *);
#define LIST_ALL_COLLECTION_CLOTHES 5
extern  int * list_all_collection_clothes_1(list_collection *, CLIENT *);
extern  int * list_all_collection_clothes_1_svc(list_collection *, struct svc_req *);
#define ADD_CLOTH_TO_COLLECTION 6
extern  list_collection * add_cloth_to_collection_1(list_collection *, CLIENT *);
extern  list_collection * add_cloth_to_collection_1_svc(list_collection *, struct svc_req *);
#define REMOVE_CLOTH_TO_COLLECTION 7
extern  list_collection * remove_cloth_to_collection_1(list_collection *, CLIENT *);
extern  list_collection * remove_cloth_to_collection_1_svc(list_collection *, struct svc_req *);
#define LIST_TYPE_ABO 8
extern  int * list_type_abo_1(list_abonnement *, CLIENT *);
extern  int * list_type_abo_1_svc(list_abonnement *, struct svc_req *);
#define AFFECTER_ABO_CLIENT 9
extern  compte * affecter_abo_client_1(compte *, CLIENT *);
extern  compte * affecter_abo_client_1_svc(compte *, struct svc_req *);
#define MODIF_ABO 10
extern  compte * modif_abo_1(compte *, CLIENT *);
extern  compte * modif_abo_1_svc(compte *, struct svc_req *);
#define ADD_SUBSCRIPTION 11
extern  list_abonnement * add_subscription_1(list_abonnement *, CLIENT *);
extern  list_abonnement * add_subscription_1_svc(list_abonnement *, struct svc_req *);
#define DISPLAY_ABONNEMENT 12
extern  int * display_abonnement_1(abonnement *, CLIENT *);
extern  int * display_abonnement_1_svc(abonnement *, struct svc_req *);
#define ADD_ARTICLE 13
extern  article_list * add_article_1(article_list *, CLIENT *);
extern  article_list * add_article_1_svc(article_list *, struct svc_req *);
#define UPDATE_ARTICLE 14
extern  article_list * update_article_1(article_list *, CLIENT *);
extern  article_list * update_article_1_svc(article_list *, struct svc_req *);
#define DELETE_ARTICLE 15
extern  article_list * delete_article_1(article_list *, CLIENT *);
extern  article_list * delete_article_1_svc(article_list *, struct svc_req *);
#define FETCH_ARTICLE 16
extern  int * fetch_article_1(article_list *, CLIENT *);
extern  int * fetch_article_1_svc(article_list *, struct svc_req *);
#define LIST_ALL_BRAND 17
extern  int * list_all_brand_1(list_brand *, CLIENT *);
extern  int * list_all_brand_1_svc(list_brand *, struct svc_req *);
#define ADD_BRAND 18
extern  list_brand * add_brand_1(list_brand *, CLIENT *);
extern  list_brand * add_brand_1_svc(list_brand *, struct svc_req *);
#define DELETE_BRAND 19
extern  list_brand * delete_brand_1(list_brand *, CLIENT *);
extern  list_brand * delete_brand_1_svc(list_brand *, struct svc_req *);
#define UPDATE_BRAND 20
extern  list_brand * update_brand_1(list_brand *, CLIENT *);
extern  list_brand * update_brand_1_svc(list_brand *, struct svc_req *);
#define ADD_TO_CART 21
extern  cart * add_to_cart_1(cart *, CLIENT *);
extern  cart * add_to_cart_1_svc(cart *, struct svc_req *);
#define RENT 22
extern  cart * rent_1(cart *, CLIENT *);
extern  cart * rent_1_svc(cart *, struct svc_req *);
#define REMOVE_FROM_CART 23
extern  cart * remove_from_cart_1(cart *, CLIENT *);
extern  cart * remove_from_cart_1_svc(cart *, struct svc_req *);
extern int service_panoply_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define INIT 1
extern  panoply * init_1();
extern  panoply * init_1_svc();
#define CREATE_ACCOUNT 2
extern  compte * create_account_1();
extern  compte * create_account_1_svc();
#define LOG_IN 3
extern  int * log_in_1();
extern  int * log_in_1_svc();
#define LIST_ALL_COLLECTION 4
extern  int * list_all_collection_1();
extern  int * list_all_collection_1_svc();
#define LIST_ALL_COLLECTION_CLOTHES 5
extern  int * list_all_collection_clothes_1();
extern  int * list_all_collection_clothes_1_svc();
#define ADD_CLOTH_TO_COLLECTION 6
extern  list_collection * add_cloth_to_collection_1();
extern  list_collection * add_cloth_to_collection_1_svc();
#define REMOVE_CLOTH_TO_COLLECTION 7
extern  list_collection * remove_cloth_to_collection_1();
extern  list_collection * remove_cloth_to_collection_1_svc();
#define LIST_TYPE_ABO 8
extern  int * list_type_abo_1();
extern  int * list_type_abo_1_svc();
#define AFFECTER_ABO_CLIENT 9
extern  compte * affecter_abo_client_1();
extern  compte * affecter_abo_client_1_svc();
#define MODIF_ABO 10
extern  compte * modif_abo_1();
extern  compte * modif_abo_1_svc();
#define ADD_SUBSCRIPTION 11
extern  list_abonnement * add_subscription_1();
extern  list_abonnement * add_subscription_1_svc();
#define DISPLAY_ABONNEMENT 12
extern  int * display_abonnement_1();
extern  int * display_abonnement_1_svc();
#define ADD_ARTICLE 13
extern  article_list * add_article_1();
extern  article_list * add_article_1_svc();
#define UPDATE_ARTICLE 14
extern  article_list * update_article_1();
extern  article_list * update_article_1_svc();
#define DELETE_ARTICLE 15
extern  article_list * delete_article_1();
extern  article_list * delete_article_1_svc();
#define FETCH_ARTICLE 16
extern  int * fetch_article_1();
extern  int * fetch_article_1_svc();
#define LIST_ALL_BRAND 17
extern  int * list_all_brand_1();
extern  int * list_all_brand_1_svc();
#define ADD_BRAND 18
extern  list_brand * add_brand_1();
extern  list_brand * add_brand_1_svc();
#define DELETE_BRAND 19
extern  list_brand * delete_brand_1();
extern  list_brand * delete_brand_1_svc();
#define UPDATE_BRAND 20
extern  list_brand * update_brand_1();
extern  list_brand * update_brand_1_svc();
#define ADD_TO_CART 21
extern  cart * add_to_cart_1();
extern  cart * add_to_cart_1_svc();
#define RENT 22
extern  cart * rent_1();
extern  cart * rent_1_svc();
#define REMOVE_FROM_CART 23
extern  cart * remove_from_cart_1();
extern  cart * remove_from_cart_1_svc();
extern int service_panoply_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_panoply (XDR *, panoply*);
extern  bool_t xdr_connu_panoply (XDR *, connu_panoply*);
extern  bool_t xdr_mail (XDR *, mail*);
extern  bool_t xdr_mot_de_passe (XDR *, mot_de_passe*);
extern  bool_t xdr_date (XDR *, date*);
extern  bool_t xdr_identifiants (XDR *, identifiants*);
extern  bool_t xdr_compte (XDR *, compte*);
extern  bool_t xdr_list_account (XDR *, list_account*);
extern  bool_t xdr_collection (XDR *, collection*);
extern  bool_t xdr_list_collection (XDR *, list_collection*);
extern  bool_t xdr_point_livraison (XDR *, point_livraison*);
extern  bool_t xdr_article (XDR *, article*);
extern  bool_t xdr_article_list (XDR *, article_list*);
extern  bool_t xdr_abonnement (XDR *, abonnement*);
extern  bool_t xdr_list_abonnement (XDR *, list_abonnement*);
extern  bool_t xdr_brand (XDR *, brand*);
extern  bool_t xdr_list_brand (XDR *, list_brand*);
extern  bool_t xdr_cart (XDR *, cart*);
extern  bool_t xdr_historiqueCommande (XDR *, historiqueCommande*);

#else /* K&R C */
extern bool_t xdr_panoply ();
extern bool_t xdr_connu_panoply ();
extern bool_t xdr_mail ();
extern bool_t xdr_mot_de_passe ();
extern bool_t xdr_date ();
extern bool_t xdr_identifiants ();
extern bool_t xdr_compte ();
extern bool_t xdr_list_account ();
extern bool_t xdr_collection ();
extern bool_t xdr_list_collection ();
extern bool_t xdr_point_livraison ();
extern bool_t xdr_article ();
extern bool_t xdr_article_list ();
extern bool_t xdr_abonnement ();
extern bool_t xdr_list_abonnement ();
extern bool_t xdr_brand ();
extern bool_t xdr_list_brand ();
extern bool_t xdr_cart ();
extern bool_t xdr_historiqueCommande ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_PANOPLY_H_RPCGEN */
