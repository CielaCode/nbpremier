# ----------------------------------------------------------------------------
# Nom         : premier.pl
# Sujet       : 
# Version     : 0.1
#
# Auteur      : BoGt
# Création    : 14/01/2025
# Mise à jour : 14/01/2025
# ----------------------------------------------------------------------------
# source généré par MoniaOrg version 0.38

Programme premier ;

##FORWARDCOMMENT##

VAR		nombre : entier ;	# passé en paramètre
		cpt : entier ;	# entier pouvant aller jusqu'au paramètre
		estpremier : entier ;	# 0 ou 1

DEBUTPROG
	nombre passé en paramètre doit etre strictement positif ;
	est_premier=1 ;
	compteur=2 ;
	TANT QUE ( (cpt < nombre) ET estPremier ) FAIRE
		SI ( nombre%cpt = 0 ) ALORS
			estpremier=0 ;
		FINSI
		cpt=cpt+1 ;
	FINTQ
	SI ( estpremier ) ALORS
		afficher premier ;
	SINON
		afficher non premier ;
	FINSI
FINPROG
