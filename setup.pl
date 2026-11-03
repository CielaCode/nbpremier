# ----------------------------------------------------------------------------
# Nom         : setup.pl
# Sujet       : 
# Version     : 0.1
#
# Auteur      : ?
# Création    : 16/10/2025
# Mise à jour : 16/10/2025
# ----------------------------------------------------------------------------
# source généré par MoniaOrg version 0.38

Programme arduino ;

# annonces de sous-programmes
PROCEDURE setup ; Prototype ;
PROCEDURE loop ; Prototype ;

PROCEDURE setup ;

DEBUT
	mettre en sortie la broche 13 ;
	la broche 13 est a 1 ;
FIN
PROCEDURE loop ;

DEBUT
	rien ;
FIN

DEBUTPROG
	setup() ;
	REPETER
		loop() ;
	JUSQU'A CE QUE ( faux ) ;
FINPROG
