/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "panoply.h"

panoply *
init_1_svc(panoply *argp, struct svc_req *rqstp)
{
	static panoply  result;


    /*init abonnements*/
    argp->abonnements.nb_different_abonnement=4;

        /* ~Abonnement n°1~ */
        argp->abonnements.abonnements[0].id_abo = 0;
        strcpy(argp->abonnements.abonnements[0].type_abo,"Un peu");
        argp->abonnements.abonnements[0].prix_abo=69;
        argp->abonnements.abonnements[0].credit_abo=1;

        /* ~Abonnement n°2~ */
        argp->abonnements.abonnements[1].id_abo = 1;
        strcpy(argp->abonnements.abonnements[0].type_abo,"Beaucoup");
        argp->abonnements.abonnements[0].prix_abo=159;
        argp->abonnements.abonnements[0].credit_abo=3;

        /* ~Abonnement n°3~ */
        argp->abonnements.abonnements[2].id_abo = 2;
        strcpy(argp->abonnements.abonnements[0].type_abo,"Passionnément");
        argp->abonnements.abonnements[0].prix_abo=229;
        argp->abonnements.abonnements[0].credit_abo=5;

        /* ~Abonnement n°4~ */
        argp->abonnements.abonnements[3].id_abo = 3;
        strcpy(argp->abonnements.abonnements[0].type_abo,"A la folie");
        argp->abonnements.abonnements[0].prix_abo=319;
        argp->abonnements.abonnements[0].credit_abo=8;    
    


    /*init articles*/
    argp->articles.nb_different_article=5;
   
       /* ~Article n°1~ */
       argp->articles.id_article = 0; 
       strcpy(argp->articles.nom,"Flower dress");
       argp->articles.taille[0]=34;
       argp->articles.taille[1]=38;
       argp->articles.taille[2]=42;
       argp->articles.taille[3]=-1;        
       argp->articles.pt_livraison=1;
       argp->articles.collection_reference.id_article                   //to complete
       argp->articles.brand_reference.id_tj_article_brand[0].id_article = 0;
       argp->articles.brand_reference.id_tj_article_brand[0].id_brand = 1;
       argp->articles.credit=1;
       argp->articles.stock=5;

    /*init comptes*/
    argp->comptes.nbCompte=1;

        /* ~compte n°1~ */
        argp->comptes.cmpt.id_compte=0;
        strcpy(argp->comptes.cmpt[0].email.email,"client1@univ-brest.fr"); 
        strcpy(argp->comptes.cmpt[0].mdp.mdp,"client1"); 
        strcpy(argp->comptes.cmpt[0].nom,"masse");
        strcpy(argp->comptes.cmpt[0].prenom,"damien");
        argp->comptes.cmpt[0].date_de_naissance.jour = 2;
        argp->comptes.cmpt[0].date_de_naissance.mois = 5;
        argp->comptes.cmpt[0].date_de_naissance.annee = 1975;
        argp->comptes.cmpt[0].telephone = 655482746;
        strcpy(argp->comptes.cmpt[0].profession,"maitre de conf");
        strcpy(argp->comptes.cmpt[0].pays,"france");
        strcpy(argp->comptes.cmpt[0].code_promo,"DS4T56");
        argp->comptes.cmpt[0].connaissance = 1;
        argp->comptes.cmpt[0].abonnement_suivi.abonnements[1]= argp->abonnements.abonnements[0];

    /*init collections*/
    argp->collections.

    /*init marques*/
    arpg->marques.

    /*init commandes*/
    arpg->commandes.



	return &result;
}

compte *
create_account_1_svc(void *argp, struct svc_req *rqstp)
{
	static compte  result;

	/*
	 * insert server code here
	 */

	return &result;
}

int *
log_in_1_svc(identifiants *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */

	return &result;
}

int *
list_all_collection_1_svc(list_collection *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */

	return &result;
}

int *
list_all_collection_clothes_1_svc(list_collection *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */

	return &result;
}

list_collection *
add_cloth_to_collection_1_svc(list_collection *argp, struct svc_req *rqstp)
{
	static list_collection  result;

	/*
	 * insert server code here
	 */

	return &result;
}

list_collection *
remove_cloth_to_collection_1_svc(list_collection *argp, struct svc_req *rqstp)
{
	static list_collection  result;

	/*
	 * insert server code here
	 */

	return &result;
}

int *
list_type_abo_1_svc(list_abonnement *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */

	return &result;
}

compte *
affecter_abo_client_1_svc(compte *argp, struct svc_req *rqstp)
{
	static compte  result;

	/*
	 * insert server code here
	 */

	return &result;
}

compte *
modif_abo_1_svc(compte *argp, struct svc_req *rqstp)
{
	static compte  result;

	/*
	 * insert server code here
	 */

	return &result;
}

list_abonnement *
add_subscription_1_svc(list_abonnement *argp, struct svc_req *rqstp)
{
	static list_abonnement  result;

	/*
	 * insert server code here
	 */

	return &result;
}

int *
display_abonnement_1_svc(abonnement *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */

	return &result;
}

article_list *
add_article_1_svc(article_list *argp, struct svc_req *rqstp)
{
	static article_list  result;

	/*
	 * insert server code here
	 */

	return &result;
}

article_list *
update_article_1_svc(article_list *argp, struct svc_req *rqstp)
{
	static article_list  result;

	/*
	 * insert server code here
	 */

	return &result;
}

article_list *
delete_article_1_svc(article_list *argp, struct svc_req *rqstp)
{
	static article_list  result;

	/*
	 * insert server code here
	 */

	return &result;
}

int *
fetch_article_1_svc(article_list *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */

	return &result;
}

int *
list_all_brand_1_svc(list_brand *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */

	return &result;
}

list_brand *
add_brand_1_svc(list_brand *argp, struct svc_req *rqstp)
{
	static list_brand  result;

	/*
	 * insert server code here
	 */

	return &result;
}

list_brand *
delete_brand_1_svc(list_brand *argp, struct svc_req *rqstp)
{
	static list_brand  result;

	/*
	 * insert server code here
	 */

	return &result;
}

list_brand *
update_brand_1_svc(list_brand *argp, struct svc_req *rqstp)
{
	static list_brand  result;

	/*
	 * insert server code here
	 */

	return &result;
}

cart *
add_to_cart_1_svc(cart *argp, struct svc_req *rqstp)
{
	static cart  result;

	/*
	 * insert server code here
	 */

	return &result;
}

cart *
rent_1_svc(cart *argp, struct svc_req *rqstp)
{
	static cart  result;

	/*
	 * insert server code here
	 */

	return &result;
}

cart *
remove_from_cart_1_svc(cart *argp, struct svc_req *rqstp)
{
	static cart  result;

	/*
	 * insert server code here
	 */

	return &result;
}
