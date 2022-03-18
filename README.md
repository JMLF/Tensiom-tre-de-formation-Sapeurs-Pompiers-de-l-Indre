# Présentation globale du projet

## Mise en situation

Les pompiers (volontaires ou professionnels) ont des obligations de mises à niveau de leurs connaissances chaque année civile.
Certaines casernes proposent de former les personnels lors de séances encadrées par des formateurs-instructeurs. La plupart
des séances pratiques simulent des accidents (de la route, ménager, de la vie de tous les jours…) et une des premières
opérations effectuées sur les victimes est de prendre ces constantes vitales
avec un tensiomètre automatique:

+ le pouls en battements par minutes,
+ la pression systolique en mmHg,
+ la pression diastolique en mmHg.

A partir de ces trois constantes, le pompier pourra réaliser les premiers gestes d’urgence de manière plus efficace.
Cependant, lors des formations, la victime est souvent un autre pompier ou un participant au stage : ces constantes vitales sont
donc tout à fait normales. Le formateur doit faire une rectification à voix haute des constantes lues par la personne formée, ce
qui « casse » la simulation.

La demande émanant des formateurs instructeurs est donc la suivante :
Pouvoir envoyer depuis un appareil portatif et autonome en énergie, les trois constantes énumérées cidessus en choisissant leurs valeurs. De plus ils désirent envoyer un message d’erreur si le brassard est
mal positionné.

Enfin pour plus de réalisme lors de la simulation, il est demandé de modifier le même tensiomètre
qu’utiliser habituellement par les pompiers. Dans le cadre des pompiers de l’Indre, un tensiomètre
automatique de marque « spengler » sous la référence « Autotensio SPG 440 ». Une photographie de cet
appareil est disponible ci-contre.

Un prototype a été réalisé par la société InnovElectronique de Limoges. Cet appareil est fonctionnel et déjà en test sur site. Une
vidéo de présentation de cette appareil est disponible en ligne sur https://innovelectronique.fr/Tensiometre/tensiometre.mp4
Une demande des pompiers est de remplacer le clavier 12 touches et le petit ecran oled du prototype par un écran tactile et du
coup réduire la taille de la télécommande.

## Objectif principal

Après analyse de ce qui précède, on peut en déduire deux objectifs principaux pour la réalisation de ce projet :

+ création d’une télécommande avec un écran tactile couleur pour le formateur,
+ démontage d’un appareil existant et remplacement de son électronique par la notre tout en conservant la fonctionnalité
des organes d’entrées sorties (pompe, bouton, brassard, alimentation par piles).

Le dialogue entre les deux appareils doit s’effectuer sans fil.

## Organisation

Trois etudiants sur ce projet:

+ Un etudiant pour la telecommande sous LittleLVGL
+ Un etudiant pour la telecommande sous QT5
+ Un etudiant pour le tensiomètre sous SDL2

## Avancement 
![alt text](https://github.com/JMLF/Tensiom-tre-de-formation-Sapeurs-Pompiers-de-l-Indre/blob/main/TF_Tensiom%C3%A8tre/assets/tensiometre-ecran-lire1.bmp)
