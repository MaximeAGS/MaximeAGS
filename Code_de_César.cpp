#include <iostream>
#include <string>

using namespace std;

int main()
{
    string texte;
    char alphabet[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
      char alphabetchiffrer[]="DEFGHIJKLMNOPQRSTUVWXYZABC";
      int decalage=3;
    cout << "Entrer le texte a chiffrer:" ;
    getline(cin,texte);
    /*cout<<"Entrer le decalage:";
    cin>>decalage;*/
    for(int i=0; i<texte.size();i++){
        /*int code = lettre;
        code+=decalage;*/
        char lettre = texte[i];
        int code = lettre;
        char lettre_chiffre = alphabetchiffrer[code - 'A'];
        /*code=(code+decalage)%26;*/
        /*if(code<'A'||code>'Z'){
        code=26-3;
    }*/
     lettre = alphabet[code];
     texte[i]=lettre_chiffre;
    }
    cout<<"Texte chiffre:"<<texte<<endl;
    return 0;
}
