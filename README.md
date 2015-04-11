# IHM-Project

##### Faire une interaction qui marche

1. Clic droit sur le projet -> Ajouter nouveau -> Qt -> Classe d'interface graphique Qt designer -> Ajout d'une classe classique
2. Faites votre interface dans le fichier .ui
3. Sur l'interface a ajouter l'interaction : Clic droit sur le bouton d'interaction -> Aller au slot -> clicked()
4. Une nouvelle fonction nom_du_bouton_clicked() a été crée, la remplir avec (ne pas oublier d'inclure le .h de votre nouveau ui) :
* ClassNouveauUI ui;
* ui.setModal(true);
* ui.exec();
5. Ca devrait fonctionner \o/
