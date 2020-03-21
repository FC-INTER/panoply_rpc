/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "panoply.h"
panoply * base_de_donnee;

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
        argp->comptes.cmpt[0].nb_credit=7;
        argp->comptes.cmpt[0].connaissance = 1;
        argp->comptes.cmpt[0].abonnement_suivi.abonnements[1]= argp->abonnements.abonnements[0];


    /*init commandes*/
    argp->commandes.nbCommande=0;

    result=*argp;
	return &result;
}

compte * create_account_1_svc(panoply *argp, struct svc_req *rqstp)
{
	static compte  result;

	printf("---------------------------------------------------\n");
	printf("Entrez votre e mail \n");
	scanf("%s",result.email.email);
	printf("Entrez votre mot de passe\n");
	scanf("%s",result.mdp.mdp);
	printf("Entrez votre nom\n");
	scanf("%s",result.nom);
	printf("Entrez votre prenom\n");
	scanf("%s",result.prenom);
	printf("Entrez votre date de naissance, jour puis mois puis annee\n");
	scanf("%d",&result.date_de_naissance.jour);
	scanf("%d",&result.date_de_naissance.mois);
	scanf("%d",&result.date_de_naissance.annee);
	printf("Entrez votre numero de telephone\n");
	scanf("%d",&result.telephone);
	printf("Entrez votre profession\n");
	scanf("%s",result.profession);
	printf("Entrez votre pays\n");
	scanf("%s",result.pays);
    result.nb_credit=0;

	printf("\n");
	printf("Comment avez vous entendu parlé de nous");
	enum connu_panoply connaissance;
	for (int i=1 ; i<7;i++){
		connaissance=i;
		switch (connaissance)
		{
		case Par_une_amie:
			printf("%d - Par_une_amie",i);
			break;
		case Une_recherche_en_ligne:
			printf("%d - Une_recherche_en_ligne",i);
			break;
		case Un_article_de_presse:
			printf("%d - Un_article_de_presse",i);
			break;
		case Aux_galerie_lafayette:
			printf("%d - Aux_galerie_lafayette",i);
			break;
		case Sur_les_reseaux_sociaux:
			printf("%d - Sur_les_reseaux_sociaux",i);
			break;
		case Autre:
			printf("%d - Autre",i);
			break;
		
		default:
			printf("Erreur affichage des differents ebum");
			break;
		}
	}
	int indice_connaissance;
	scanf("%d",&indice_connaissance);
	result.connaissance=indice_connaissance;
	printf("Fin création compte\n");
	printf("---------------------------------------------------\n");
	return &result;
}

int * log_in_1_svc(identifiants *argp, struct svc_req *rqstp)
{
	static int  result;
	char mail_connexion[128];
	char mdp[32];
	int id_retour=-1;
	printf("---------------------------------------------------\n");
	printf("Entrez votre adresse mail :\n");
	scanf("%s",mail_connexion);
	printf("Entrez votre mot de passe :\n");
	scanf("%s",mdp);	

	for (int i=0; i<argp->comptes.nbCompte-1;i++){
		if (strcmp(base_de_donnee->comptes.cmpt[i].email.email,mail_connexion)==0 && strcmp(base_de_donnee->comptes.cmpt[i].mdp,mdp)==0){
			id_retour=i;
			printf("Connexion réussie");
		}
	}
	printf("---------------------------------------------------\n");
	result=id_retour;
	return &result;
}

int * list_all_collection_1_svc(list_collection *argp, struct svc_req *rqstp)
{
	static int result = 0; //compteur de collection
    result = argp->nb_different_collection;
	return &result;
}

int * list_all_collection_clothes_1_svc(article_list *argp, struct svc_req *rqstp)
{
    //returns the number of clothes or -1 if error
	static int  result;
    for(int i = 0; i < 150; i++){
        argp->article[i].collection_reference.id_collection;
    }
	return &result;
}

list_collection *
add_cloth_to_collection_1_svc(article *argp, struct svc_req *rqstp)
{
    // returns the list of all different collection
	static list_collection  result;
    list_collection lcoll;
    printf("Dans quelle collection voulez-vous l'ajouter ?\n");
    for(int i = 0; i < lcoll.nb_different_collection; i++){
        printf("n° : %d\n", i);
    }
    int num_coll_add; //numero de la collection où l'on va ajouter notre article
    scanf("%d", &num_coll_add);
    argp->collection_reference.id_collection = num_coll_add;
	return &result;
}

list_collection *
remove_cloth_to_collection_1_svc(article *argp, struct svc_req *rqstp)
{
	static list_collection  result;
    list_collection lcoll;
    if(argp->collection_reference.id_collection == -1){
        printf("L'article n'a pas de collection\n");
    }
    argp->collection_reference.id_collection = -1;
	return &result;
}

int *
list_type_abo_1_svc(list_abonnement *argp, struct svc_req *rqstp)
{
    //list every subscription -- returns the number of element or -1 if error
	static int  result;
    result = argp->nb_different_abonnement;
	return &result;
}

compte *
affecter_abo_client_1_svc(compte *argp, struct svc_req *rqstp)
{
    //set the subscription of an account -- returns an account
	static compte  result;
    printf("Quelle abonnement voulez-vous choisir ?\n");
    list_abonnement labo;
    for(int i = 0; i < labo.nb_different_abonnement; i++){
        printf("%d\n", i);
    }
    int num_abo;
    scanf("%d", &num_abo);
    argp->abonnement_suivi.nb_different_abonnement++;
    int nb_abo_compte = argp->abonnement_suivi.nb_different_abonnement++;
    argp->abonnement_suivi.abonnements[nb_abo_compte-1].id_abo = num_abo;
    
	return &result;
}

compte *
modif_abo_1_svc(compte *argp, struct svc_req *rqstp)
{
    // edit account subsciption -- returns 0 or -1 if error
	static compte  result;
    printf("Quelle abonnement voulez-vous modifier ?\n");
    list_abonnement labo;
    for(int i = 0; i < argp->abonnement_suivi.nb_different_abonnement; i++){
        printf("%d\n", i);
    }
    int num_abo;
    scanf("%d", &num_abo);
    printf("Par quel abonnement voulez-vous le modifier ?\n");
    for(int i = 0; i < labo.nb_different_abonnement; i++){
        printf("%d\n", i);
    }
    int new_abo;
    scanf("%d", &num_abo);
    argp->abonnement_suivi.abonnements[num_abo].id_abo = new_abo;
	return &result;
}

list_abonnement *
add_subscription_1_svc(abonnement *argp, struct svc_req *rqstp)
{
    // add a new subscription to the list -- returns a subscription
	static list_abonnement  result;
    result.nb_different_abonnement++;
    int nb_abo = result.nb_different_abonnement++;
    result.abonnements[nb_abo-1].id_abo = argp->id_abo;
    strcpy(result.abonnements[nb_abo-1].type_abo,argp->type_abo);
    result.abonnements[nb_abo-1].prix_abo = argp->prix_abo;
    result.abonnements[nb_abo-1].credit_abo = argp->credit_abo;
	return &result;
}

int *
display_abonnement_1_svc(abonnement *argp, struct svc_req *rqstp)
{
	static int  result;
    list_account nb_compte_abonne;
    for(int i = 0; i < nb_compte_abonne.nbCompte; i++){   //parcours du tab cmpt[250]
        for(int j = 0; j < 30; j++){    //parcours du tab abonnements[30]
            if(nb_compte_abonne.cmpt[i].abonnement_suivi.abonnements[j].id_abo == argp->id_abo){
                result++;
            }   
        }
    }

	return &result;
}

article_list *
add_article_1_svc(article_list *argp, struct svc_req *rqstp)
{
    //add an article to the list of article -- returns the new list of article
	static article_list  result;
    article new_article;
    int id;
    char nom[32];
    int taille, pt_livraison, prix, id_collec, id_marq, credit, stock;
    printf("Id de l'article ?\n");
    scanf("%d",&id);
    new_article.id_article = id; 
    printf("Nom de l'article ?\n");
    scanf("%s", nom);
    strcpy(new_article.nom, nom);
    printf("Tailles de l'article ? (20) \n");
    for(int i = 0; i < 20; i++){
        scanf("%d", &taille);
        new_article.taille[i] = taille;
    }
    printf("Point de livraison de l'article ?\n");
    scanf("%d", &pt_livraison);
    new_article.pt_livraison = pt_livraison;
    printf("Prix de location de l'article ?\n");
    scanf("%d", &prix);
    new_article.prix_location = prix;
    printf("Reference de la collection de l'article ?\n");
    scanf("%d", &id_collec);
    new_article.collection_reference.id_collection = id_collec;
    printf("Reference de la marque de l'article ?\n");
    scanf("%d", &id_marq);
    new_article.brand_reference.id_brand = id_marq;
    printf("Crédit de l'article ?\n");
    scanf("%d", &credit);
    new_article.credit = credit;
    printf("Stock de l'article ?\n");
    scanf("%d", &stock);
    new_article.stock = stock;
    argp->nb_different_article++;
    argp->article[argp->nb_different_article] = new_article;
	return argp;
}

article_list *
update_article_1_svc(article_list *argp, struct svc_req *rqstp)
{
    // update the list of articles -- returns the new list of article
	static article_list  result;

	return &result;
}

article_list *
delete_article_1_svc(article_list *argp, struct svc_req *rqstp)
{
    // remove an article from the article list -- returns the new list of article
	static article_list  result;
    int id;
    printf("Quel article voulez-vous supprimer ? (ID)\n");
    for(int i = 0; i < argp->nb_different_article; i++){
        printf("ID : %d, Nom : %s\n", argp->article[i].id_article, argp->article[i].nom);
    }
    scanf("%d", &id);
    if((id > argp->nb_different_article) || (id < 0)) { 
        printf("L'ID sélectionné n'existe pas dans la liste\n");
        return argp;
    }
    argp->nb_different_article--;
    argp->article[id].id_article = -1;
    strcpy(argp->article[id].nom," ");
    for(int i = 0; i < 20; i++){
        argp->article[id].taille[i] = -1;
    }
    argp->article[id].pt_livraison = 1;
    argp->article[id].prix_location = -1;
    //argp->article[id].collection_reference.id_collection
    //argp->article[id].brand_reference
    argp->article[id].credit = -1;
    argp->article[id].stock = 0;
	return argp;
}

int *
fetch_article_1_svc(article_list *argp, struct svc_req *rqstp)
{
    //get a specified article -- returns 0 or -1 if error
	static int  result;
    int id;
    int * returnMoinsUn = (int *) -1;
    printf("Informations supplémentaires d'un article :\n");
    for(int i = 0; i < argp->nb_different_article; i++){
        printf("ID : %d, Nom : %s\n", argp->article[i].id_article, argp->article[i].nom);
    }
    scanf("%d", &id);
    if((id > argp->nb_different_article) || (id < 0)) { 
        printf("ERROR : L'ID sélectionné n'existe pas dans la liste\n");
        return returnMoinsUn;
    }
    printf("Nom : %s\n",argp->article[id].nom);
    for(int i = 0; i < 20; i++){
        printf("Taille : %d\n", argp->article[id].taille[i]);
    }
    printf("N° point de livraison : %d\n", argp->article[id].pt_livraison);
    printf("Prix location : %d\n", argp->article[id].prix_location);
    printf("Nom de la collection : %s\n", argp->article[id].collection_reference.nom_collection);
    printf("Nom de la marque : %s\n", argp->article[id].brand_reference.brand_name);
    printf("Crédit : %d\n", argp->article[id].credit);
    printf("Stock : %d\n", argp->article[id].stock);
	return 0;
}

int *
list_all_brand_1_svc(list_brand *argp, struct svc_req *rqstp)
{
    // list every brand -- returns 0 or -1 if error
	static int  result;
    for(int i = 0; i < argp->nb_different_brand; i++){
        printf("Nom : %s\n", argp->brands[i].brand_name);
    }
	return 0;
}

list_brand *
add_brand_1_svc(list_brand *argp, struct svc_req *rqstp)
{
    // add a brand to the list -- returns the new list of brand
	static list_brand  result;
    int id;
    char nom[32];
    char description[3000];
    argp->nb_different_brand++;
    printf("ID de la marque : \n");
    scanf("%d", &id);
    argp->brands[argp->nb_different_brand-1].id_brand = id;
    printf("Nom de la marque : \n");
    scanf("%s", nom);
    strcpy(argp->brands[argp->nb_different_brand-1].brand_name,nom);
    printf("Description de la marque : \n");
    scanf("%s", description);
    strcpy(argp->brands[argp->nb_different_brand-1].description,description);
    printf("Fin\n");
	return argp;
}

list_brand *
delete_brand_1_svc(list_brand *argp, struct svc_req *rqstp)
{
    // remove a brand from a list -- returns the new list of brand
	static list_brand  result;
    int id;
    printf("Quel marque supprimer ? (ID)\n");
    for(int i = 0; i < argp->nb_different_brand; i++){
        printf("ID : %d, Nom : %s\n",argp->brands[i].id_brand, argp->brands[i].brand_name);
    }
    printf("ID de la marque à supprimer : \n");
    scanf("%d", &id);
    for(int i = 0; i < argp->nb_different_brand; i++){
        if(id == argp->brands[i].id_brand){
            argp->brands[i].id_brand = -1;
            strcpy(argp->brands[i].brand_name, " ");
            strcpy(argp->brands[i].description, " ");
        }
    }
    argp->nb_different_brand--;
	return argp;
}

list_brand *
update_brand_1_svc(list_brand *argp, struct svc_req *rqstp)
{
	 // update a brand from a list -- returns the new list of brand
	static list_brand  result;

	return &result;
}

void *
list_all_cart_1_svc(cart *argp, struct svc_req *rqstp)
{
	static char * result;
	int i;

	printf("---------------------------------------------------\n");
	printf("Vos articles dans votre panier : \n");
	for(i=0;i<argp->nbArticle-1;i++){
		printf("	%d - %s \n",i,argp->list_article[i].nom);
	}
	printf("---------------------------------------------------\n");

	return (void *) &result;
}

panoply *
add_to_cart_1_svc(panoply *argp, struct svc_req *rqstp)
{
	static panoply  result;
	int i,indice,id;
	char term;

	printf("---------------------------------------------------\n");
	printf("Quel est votre identifiant ?\n");
	scanf("%d",&id);

	printf("Liste de tous les articles\n");
	for (i=0;argp->articles.nb_different_article;i++){
		printf("	%d - %s\n",i,argp->articles.article[i].nom);
	}

	do{
		printf("Entrez l'indice de l'article à ajouter\n");
		scanf("%d%c",&indice,&term);
	}while(term!='\n');

	printf("Ajout au panier ...");

	int nb_article; 
	struct article article_added;

	argp->commandes.listCommande[id].nbArticle++;
	nb_article=argp->commandes.listCommande[id].nbArticle;
	article_added=argp->articles.article[indice];
	argp->commandes.listCommande[id].list_article[nb_article]=article_added;

	printf("Panier mis à jour");
	printf("---------------------------------------------------\n");
	
	result=*argp;
	return &result;
}

panoply *
rent_1_svc(panoply *argp, struct svc_req *rqstp)
{
	static panoply  result;

	char confirmation;
	char payement;
	int id,nb_article,i,indice_article,stock;
	struct article passage;


	printf("---------------------------------------------------\n");
	printf("Quel est votre identifiant ?\n");
	scanf("%d",&id);
	printf("Etes vous sur de vouloir louer ce(s) vêtement ? (y/n)\n");
	scanf("%s",&confirmation);
	if (confirmation == 'y'){
		printf("Prix en euro : %d\n",argp->commandes.listCommande[id].list_article[id].prix_location);
		printf("Prix jeton : %d\n",argp->commandes.listCommande[id].list_article[id].prix_location);
		printf("Voulez vous payer en jeton ou en euros ? (j/e)\n");
		scanf("%s",&payement);
		if(payement == 'j'){
			argp->comptes.cmpt[id].nb_credit--;
			printf("Payement effectué\n");
			nb_article=argp->commandes.listCommande[id].nbArticle;
			printf("Mise à jour des stock\n");
			for (i = 0 ; i<nb_article ; i++ ){

				indice_article=argp->commandes.listCommande[id].list_article[i].id_article;
				stock=argp->commandes.listCommande[id].list_article[i].stock;
				printf("	article : %s | indice : %d |stock : %d\n",argp->commandes.listCommande[id].list_article[i].nom,indice_article,stock);
				stock = argp->articles.article[indice_article-1].stock;
				stock--;
				printf("	article : %s | indice : %d |stock : %d\n",argp->articles.article[indice_article-1].nom,indice_article-1,stock);

			}
			printf("\n");
			printf("Suppression du panier\n");
			for (int i =id; argp->commandes.listCommande[id].nbArticle-2; i++){
				passage=argp->commandes.listCommande[id].list_article[i];
				argp->commandes.listCommande[id].list_article[i]=argp->commandes.listCommande[id].list_article[i+1];
				argp->commandes.listCommande[id].list_article[i+1]=passage;		
			}	
			argp->commandes.listCommande[id].nbArticle--;
			printf("Panier supprime\n");
		}
		else if (payement == 'e'){
			printf("Payement effectué, votre moula est partie\n");
			nb_article=argp->commandes.listCommande[id].nbArticle;
			printf("Mise à jour des stock\n");
			for (i = 0 ; i<nb_article ; i++ ){

				indice_article=argp->commandes.listCommande[id].list_article[i].id_article;
				stock=argp->commandes.listCommande[id].list_article[i].stock;
				printf("	article : %s | indice : %d |stock : %d\n",argp->commandes.listCommande[id].list_article[i].nom,indice_article,stock);
				stock = argp->articles.article[indice_article-1].stock;
				stock--;
				printf("	article : %s | indice : %d |stock : %d\n",argp->articles.article[indice_article-1].nom,indice_article-1,stock);

			}
			printf("\n");
			printf("Suppression du panier\n");
			for (int i =id; argp->commandes.listCommande[id].nbArticle-2; i++){
				passage=argp->commandes.listCommande[id].list_article[i];
				argp->commandes.listCommande[id].list_article[i]=argp->commandes.listCommande[id].list_article[i+1];
				argp->commandes.listCommande[id].list_article[i+1]=passage;		
			}	
			argp->commandes.listCommande[id].nbArticle--;
			printf("Panier supprime\n");
		}
		else{
			printf("vous ne savez pas taper sur votre ordi èé");
		}
	}
	else  if (confirmation == 'n') {
		printf("Vous avez renoncé à la location");
	}
	else{
		printf("vous ne savez pas taper sur votre ordi èé");
	}
	
	printf("---------------------------------------------------\n");

	result=*argp;
	return &result;
}

cart *
remove_from_cart_1_svc(cart *argp, struct svc_req *rqstp)
{
	static cart  result;
	int indice;
	struct article passage;


	printf("---------------------------------------------------\n");
	list_all_cart_1_svc(argp,rqstp);
	printf("Indiquez l'indice de l'article à supprimer : \n");
	scanf("%d",&indice);
	for (int i =indice; argp->nbArticle-2; i++){
		passage=argp->list_article[i];
		argp->list_article[i]=argp->list_article[i+1];
		argp->list_article[i+1]=passage;		
	}	
	argp->nbArticle--;
	printf("Article supprimé\n");
	printf("---------------------------------------------------\n");
	result=*argp;

	return &result;
}
