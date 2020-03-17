/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "panoply.h"
#include <stdio.h>
#include <stdlib.h>
#include <rpc/pmap_clnt.h>
#include <string.h>
#include <memory.h>
#include <sys/socket.h>
#include <netinet/in.h>

#ifndef SIG_PF
#define SIG_PF void(*)(int)
#endif

static void
service_panoply_1(struct svc_req *rqstp, register SVCXPRT *transp)
{
	union {
		panoply init_1_arg;
		panoply create_account_1_arg;
		identifiants log_in_1_arg;
		list_collection list_all_collection_1_arg;
		article_list list_all_collection_clothes_1_arg;
		article add_cloth_to_collection_1_arg;
		article remove_cloth_to_collection_1_arg;
		list_abonnement list_type_abo_1_arg;
		compte affecter_abo_client_1_arg;
		compte modif_abo_1_arg;
		abonnement add_subscription_1_arg;
		abonnement display_abonnement_1_arg;
		article_list add_article_1_arg;
		article_list update_article_1_arg;
		article_list delete_article_1_arg;
		article_list fetch_article_1_arg;
		list_brand list_all_brand_1_arg;
		list_brand add_brand_1_arg;
		list_brand delete_brand_1_arg;
		list_brand update_brand_1_arg;
		cart list_all_cart_1_arg;
		panoply add_to_cart_1_arg;
		panoply rent_1_arg;
		cart remove_from_cart_1_arg;
	} argument;
	char *result;
	xdrproc_t _xdr_argument, _xdr_result;
	char *(*local)(char *, struct svc_req *);

	switch (rqstp->rq_proc) {
	case NULLPROC:
		(void) svc_sendreply (transp, (xdrproc_t) xdr_void, (char *)NULL);
		return;

	case INIT:
		_xdr_argument = (xdrproc_t) xdr_panoply;
		_xdr_result = (xdrproc_t) xdr_panoply;
		local = (char *(*)(char *, struct svc_req *)) init_1_svc;
		break;

	case CREATE_ACCOUNT:
		_xdr_argument = (xdrproc_t) xdr_panoply;
		_xdr_result = (xdrproc_t) xdr_compte;
		local = (char *(*)(char *, struct svc_req *)) create_account_1_svc;
		break;

	case LOG_IN:
		_xdr_argument = (xdrproc_t) xdr_identifiants;
		_xdr_result = (xdrproc_t) xdr_int;
		local = (char *(*)(char *, struct svc_req *)) log_in_1_svc;
		break;

	case LIST_ALL_COLLECTION:
		_xdr_argument = (xdrproc_t) xdr_list_collection;
		_xdr_result = (xdrproc_t) xdr_int;
		local = (char *(*)(char *, struct svc_req *)) list_all_collection_1_svc;
		break;

	case LIST_ALL_COLLECTION_CLOTHES:
		_xdr_argument = (xdrproc_t) xdr_article_list;
		_xdr_result = (xdrproc_t) xdr_int;
		local = (char *(*)(char *, struct svc_req *)) list_all_collection_clothes_1_svc;
		break;

	case ADD_CLOTH_TO_COLLECTION:
		_xdr_argument = (xdrproc_t) xdr_article;
		_xdr_result = (xdrproc_t) xdr_list_collection;
		local = (char *(*)(char *, struct svc_req *)) add_cloth_to_collection_1_svc;
		break;

	case REMOVE_CLOTH_TO_COLLECTION:
		_xdr_argument = (xdrproc_t) xdr_article;
		_xdr_result = (xdrproc_t) xdr_list_collection;
		local = (char *(*)(char *, struct svc_req *)) remove_cloth_to_collection_1_svc;
		break;

	case LIST_TYPE_ABO:
		_xdr_argument = (xdrproc_t) xdr_list_abonnement;
		_xdr_result = (xdrproc_t) xdr_int;
		local = (char *(*)(char *, struct svc_req *)) list_type_abo_1_svc;
		break;

	case AFFECTER_ABO_CLIENT:
		_xdr_argument = (xdrproc_t) xdr_compte;
		_xdr_result = (xdrproc_t) xdr_compte;
		local = (char *(*)(char *, struct svc_req *)) affecter_abo_client_1_svc;
		break;

	case MODIF_ABO:
		_xdr_argument = (xdrproc_t) xdr_compte;
		_xdr_result = (xdrproc_t) xdr_compte;
		local = (char *(*)(char *, struct svc_req *)) modif_abo_1_svc;
		break;

	case ADD_SUBSCRIPTION:
		_xdr_argument = (xdrproc_t) xdr_abonnement;
		_xdr_result = (xdrproc_t) xdr_list_abonnement;
		local = (char *(*)(char *, struct svc_req *)) add_subscription_1_svc;
		break;

	case DISPLAY_ABONNEMENT:
		_xdr_argument = (xdrproc_t) xdr_abonnement;
		_xdr_result = (xdrproc_t) xdr_int;
		local = (char *(*)(char *, struct svc_req *)) display_abonnement_1_svc;
		break;

	case ADD_ARTICLE:
		_xdr_argument = (xdrproc_t) xdr_article_list;
		_xdr_result = (xdrproc_t) xdr_article_list;
		local = (char *(*)(char *, struct svc_req *)) add_article_1_svc;
		break;

	case UPDATE_ARTICLE:
		_xdr_argument = (xdrproc_t) xdr_article_list;
		_xdr_result = (xdrproc_t) xdr_article_list;
		local = (char *(*)(char *, struct svc_req *)) update_article_1_svc;
		break;

	case DELETE_ARTICLE:
		_xdr_argument = (xdrproc_t) xdr_article_list;
		_xdr_result = (xdrproc_t) xdr_article_list;
		local = (char *(*)(char *, struct svc_req *)) delete_article_1_svc;
		break;

	case FETCH_ARTICLE:
		_xdr_argument = (xdrproc_t) xdr_article_list;
		_xdr_result = (xdrproc_t) xdr_int;
		local = (char *(*)(char *, struct svc_req *)) fetch_article_1_svc;
		break;

	case LIST_ALL_BRAND:
		_xdr_argument = (xdrproc_t) xdr_list_brand;
		_xdr_result = (xdrproc_t) xdr_int;
		local = (char *(*)(char *, struct svc_req *)) list_all_brand_1_svc;
		break;

	case ADD_BRAND:
		_xdr_argument = (xdrproc_t) xdr_list_brand;
		_xdr_result = (xdrproc_t) xdr_list_brand;
		local = (char *(*)(char *, struct svc_req *)) add_brand_1_svc;
		break;

	case DELETE_BRAND:
		_xdr_argument = (xdrproc_t) xdr_list_brand;
		_xdr_result = (xdrproc_t) xdr_list_brand;
		local = (char *(*)(char *, struct svc_req *)) delete_brand_1_svc;
		break;

	case UPDATE_BRAND:
		_xdr_argument = (xdrproc_t) xdr_list_brand;
		_xdr_result = (xdrproc_t) xdr_list_brand;
		local = (char *(*)(char *, struct svc_req *)) update_brand_1_svc;
		break;

	case LIST_ALL_CART:
		_xdr_argument = (xdrproc_t) xdr_cart;
		_xdr_result = (xdrproc_t) xdr_void;
		local = (char *(*)(char *, struct svc_req *)) list_all_cart_1_svc;
		break;

	case ADD_TO_CART:
		_xdr_argument = (xdrproc_t) xdr_panoply;
		_xdr_result = (xdrproc_t) xdr_panoply;
		local = (char *(*)(char *, struct svc_req *)) add_to_cart_1_svc;
		break;

	case RENT:
		_xdr_argument = (xdrproc_t) xdr_panoply;
		_xdr_result = (xdrproc_t) xdr_panoply;
		local = (char *(*)(char *, struct svc_req *)) rent_1_svc;
		break;

	case REMOVE_FROM_CART:
		_xdr_argument = (xdrproc_t) xdr_cart;
		_xdr_result = (xdrproc_t) xdr_cart;
		local = (char *(*)(char *, struct svc_req *)) remove_from_cart_1_svc;
		break;

	default:
		svcerr_noproc (transp);
		return;
	}
	memset ((char *)&argument, 0, sizeof (argument));
	if (!svc_getargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
		svcerr_decode (transp);
		return;
	}
	result = (*local)((char *)&argument, rqstp);
	if (result != NULL && !svc_sendreply(transp, (xdrproc_t) _xdr_result, result)) {
		svcerr_systemerr (transp);
	}
	if (!svc_freeargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
		fprintf (stderr, "%s", "unable to free arguments");
		exit (1);
	}
	return;
}

int
main (int argc, char **argv)
{
	register SVCXPRT *transp;

	pmap_unset (SERVICE_PANOPLY, SERVICE_VERSION_1);

	transp = svcudp_create(RPC_ANYSOCK);
	if (transp == NULL) {
		fprintf (stderr, "%s", "cannot create udp service.");
		exit(1);
	}
	if (!svc_register(transp, SERVICE_PANOPLY, SERVICE_VERSION_1, service_panoply_1, IPPROTO_UDP)) {
		fprintf (stderr, "%s", "unable to register (SERVICE_PANOPLY, SERVICE_VERSION_1, udp).");
		exit(1);
	}

	transp = svctcp_create(RPC_ANYSOCK, 0, 0);
	if (transp == NULL) {
		fprintf (stderr, "%s", "cannot create tcp service.");
		exit(1);
	}
	if (!svc_register(transp, SERVICE_PANOPLY, SERVICE_VERSION_1, service_panoply_1, IPPROTO_TCP)) {
		fprintf (stderr, "%s", "unable to register (SERVICE_PANOPLY, SERVICE_VERSION_1, tcp).");
		exit(1);
	}

	svc_run ();
	fprintf (stderr, "%s", "svc_run returned");
	exit (1);
	/* NOTREACHED */
}
