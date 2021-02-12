#ifndef CATEGORIE_H_INCLUDED
#define CATEGORIE_H_INCLUDED

class Categorie{
 public:
    int id;
    string nom;
    Categorie();
    Categorie(int, string);
    void Aff();
};
Categorie::Categorie(){
    id = 0;
    nom = "";
}
Categorie::Categorie(int i, string c){
    id = i;
    nom = c;
}
void Categorie::Aff(){
    cout<<"ID_cat : "<<id<<endl<<"Nom_cat : "<<nom<<endl;
}
#endif // CATEGORIE_H_INCLUDED
