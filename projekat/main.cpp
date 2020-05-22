#include <iostream>
#include <fstream>
using namespace std;

#include "camac.hpp"
#include "kamere.hpp"
#include "osoblje.hpp"
#include "takmicar.hpp"
#include "tiptakm.hpp"
#include "zvuk.hpp"
#include "tabela.hpp"
#include "takmicenje.hpp"

int Osoblje::gd=0;

ostream& operator<<(ostream& izlaz, const TipTakmicenja& tt){

    izlaz<<"Takmicenja - ispis"<<endl;
    izlaz<<"DRZAVA: "<<tt.drzava<<endl;
    izlaz<<"TIP: "<<tt.nivoTakmicenja<<endl;
    izlaz<<"GRAD: "<<tt.grad<<endl;

return izlaz;
    }
ostream& operator<<(ostream& izlaz, const Takmicar& t){

    izlaz<<"Takmicar - ispis"<<endl;
    izlaz<<"VREME: "<<t.vreme<<endl;
    izlaz<<"PREZIME: "<<t.prezime<<endl;
    izlaz<<"KLUB: "<<t.klub<<endl;
    izlaz<<"GODISTE: "<<t.godiste<<endl;
    izlaz<<"KATEGORIJA: "<<t.k<<endl;

return izlaz;
}
ostream& operator<<(ostream& izlaz, const Camac& c){

    izlaz<<"Camac - ispis"<<endl;
    izlaz<<"VELICINA: "<<c.velicina<<endl;
    izlaz<<"DISCIPLINA: "<<c.disciplina<<endl;
return izlaz;
    }
ostream&  operator<<(ostream& izlaz, const Osoblje& o){

    izlaz<<"Osoblje - ispis"<<endl;
    izlaz<<"GODINE: "<<o.godine<<endl;
    izlaz<<"IME: "<<o.ime<<endl;
    izlaz<<"PREZIME: "<<o.prezime<<endl;
    izlaz<<"PAUZA: "<<o.pauza<<endl;
return izlaz;
}

int main()
{
    int x;
    cout << "             | Dobrodosli na meni |" << endl;
    cout << ":::::::::::::::::::::::::::::::::::::::::::::::::"<< endl;
    cout << "Izaberite jednu od opcija." << endl;
    cout << "1. Ispis takmicenja." << endl;
    cout << "2. Ispis takmicara." << endl;
    cout << "3. Ispis camca." << endl;
    cout << "4. Dodavanje osoblja." << endl;
    cout << "5. Ispis osoblja." << endl;
    cout << "6. Ispis doktora." << endl;
    cout << "7. Pretraga osoblja." << endl;
    cout << "8. Obrisi osoblje." << endl;
    cout << "9. Pauza osoblja" << endl;
    cout << "10. Rezervno osoblje." << endl;
    cout << ":::::::::::::::::::::::::::::::::::::::::::::::::"<< endl;
    cout << "\n" << endl;
    cin >> x;
    TipTakmicenja tt("Srbija", "Novi Sad", "Drzavno prvenstvo");
    Takmicar t(50,"Tatalovic","VKD",2003,kadeti);
    Camac c(4 , "Rimen");
    switch(x){
    case 1:
    {
    cout << tt << endl;
    break;
    }
    case 2:
    {
    cout << t << endl;
    break;
    }
    case 3:
    {
    cout << c << endl;
    break;
    }
    }
    Osoblje o(25,"Pera","Neko", true);
    Osoblje o1(27,"Nikola","Neko",false);
    Osoblje o2(28,"Marko","Neko",true);
    Doktor d(26,"Marko","Maric",true,false);
    if(x==4){
    d.DodajOsoblje(o);
    d.IspisiOsoblja();
    cout << "Da li zelite da dodate jos jednu osobu?" << endl;
    cout << "Ako da pritisnite 1, a ako ne pritisnite 2.\n" << endl;
    do{
        cin >> x;

    }while(x!=1 && x!=2);
    if (x==1)
    {
        d.DodajOsoblje(o1);
        d.IspisiOsoblja();
    cout << "Da li zelite da dodate jos jednu osobu?" << endl;
    cout << "Ako da pritisnite 1, a ako ne pritisnite 2.\n" << endl;
    do{
        cin >> x;
    }while (x!=1 && x!=2);
    if(x==1)
    {
        d.DodajOsoblje(o2);
        d.IspisiOsoblja();
    }
    }
    }
    if(x==6)
    {
        d.IspisOsoblje();
    }
    if(x==7)
    {
        cout << "Unesite ime koje zelite da pronadjete." << endl;
        d.Pretraga();
    }
    if(x==8)
    {
        cout << "Unesite ime i prezime osobe koje ne zelite da obrisete." << endl;
        d.BrisanjeOsoblja();
    }
    if (x==9)
    {
        d.Pauza();
    }
    if(x==10)
    {
        cout << "Rezervno osoblje su: " << endl;
        citajTxt("osoblje.txt");
    }


    //Predlog funkcionalnosti: Pregled organizacije trke u veslanju.
    return 0;
}
