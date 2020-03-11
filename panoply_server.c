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
    
    /*init collections*/
    argp->collections.nb_different_collection=2;
    
        /* ~Collection n°1~ */
        argp->collections.collection[0].id_collection=0;
        strcpy(argp->collections.collection[0].nom_collection,"Robes longues");

        /* ~Collection n°2~ */
        argp->collections.collection[1].id_collection=1;
        strcpy(argp->collections.collection[1].nom_collection,"Robes mini");

    /*init marques*/
    argp->marques.nb_different_brand=2;

        /* ~Marques n°1~ */
        argp->marques.brands[0].id_brand=0;
        strcpy(argp->marques.brands[0].brand_name,"3.1 Phillip Lim");
        strcpy(argp->marques.brands[0].description,"Un style classique maitrisé associé à une touche sportwear définit l'identité de la maison 3.1 Phillip Lim.\n\nLe minimalisme des pièces et la palette de couleurs restreinte focalisent l'attention sur des coupes structurées et des détails originaux mis en valeur par des matières nobles et texturées pour une femme libre et naturellement chic.");

        /* ~Marques n°2~ */
        argp->marques.brands[1].id_brand=1;
        strcpy(argp->marques.brands[1].brand_name,"Alexis Mabille");
        strcpy(argp->marques.brands[1].description,"Formé aux côtés de Hedi Slimane chez Dior, Alexis Mabille s'intéresse particulièrement à l'androgynie et aux frontières du masculin et du féminin. Il lance sa griffe en 2005 et crée des collections unisexes remarquées du milieu de la mode. Il revisite le nœud papillon en jouant sur les volumes et cet accessoire désuet devient sa marque de fabrique.");

    /*init articles*/
    argp->articles.nb_different_article=5;
   
       /* ~Article n°1~ */
       argp->articles.article[0].id_article = 0; 
       strcpy(argp->articles.article[0].nom,"Flower dress");
       argp->articles.article[0].taille[0]=34;
       argp->articles.article[0].taille[1]=38;
       argp->articles.article[0].taille[2]=42;
       argp->articles.article[0].taille[3]=-1;        
       argp->articles.article[0].pt_livraison=1;
       argp->articles.article[0].prix_location=55;       
       argp->articles.article[0].collection_reference=argp->collections.collection[0];                   
       argp->articles.article[0].brand_reference = argp->marques.brands[1];
       argp->articles.article[0].credit=1;
       argp->articles.article[0].stock=5;

    /*init comptes*/
    argp->comptes.nbCompte=1;

        /* ~compte n°1~ */
        argp->comptes.cmpt[0].id_compte=0;
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
        argp->comptes.cmpt[0].nb_credit=7;
        argp->comptes.cmpt[0].connaissance = 1;
        argp->comptes.cmpt[0].abonnement_suivi.abonnements[1]= argp->abonnements.abonnements[0];


    /*init commandes*/
    argp->commandes.nbCommande=0;

    result=*argp;
	return &result;
}

compte * create_account_1_svc(void *argp, struct svc_req *rqstp)
{
	static compte  result;

	/*
	 * insert server code here
	 */

	return &result;
}

int * log_in_1_svc(identifiants *argp, struct svc_req *rqstp)
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
