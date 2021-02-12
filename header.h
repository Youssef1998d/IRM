#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

class Adresse{
private:
    int numero;
    string rue;
    int codeP;
    string ville;
public:
    Adresse();
    Adresse(int, string, int, string);
    void Affich();
};

class Personne{
private:
    string CIN;
    string nom;
    string prenom;
    Adresse adr;
public:
    Personne();
    Personne(string, string, string, Adresse);
    void Affich();
};
Adresse::Adresse(){
    numero = 0;
    rue = "";
    codeP = 0;
    ville = "";
}

Adresse::Adresse(int n, string r, int cp, string v){
    numero = n;
    rue = r;
    codeP = cp;
    ville = v;
}

void Adresse::Affich(){
    cout <<"N°"<<numero<<endl<<"Rue : "<<rue<<endl<<"Code Postale : "<<codeP<<endl<<"Ville : "<<ville<<endl;
}
Personne::Personne(){
    CIN = "";
    nom = "";
    prenom = "";
}
Personne::Personne(string c, string n, string pr, Adresse a){
    CIN = c;
    nom = n;
    prenom = pr;
    adr = a;
};
void Personne::Affich(){
    cout<<"N°CIN : "<<CIN<<endl<<"Nom : "<<nom<<endl<<"Prenom : "<<prenom<<endl<<"Adresse : "<<endl;
    adr.Affich();
}







#endif // HEADER_H_INCLUDED
