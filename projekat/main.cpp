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

    izlaz<<"Tip takmicenja - ispis"<<endl;
    izlaz<<"DRZAVA: "<<tt.drzava<<endl;
    izlaz<<"TIP: "<<tt.nivoTakmicenja<<endl;
    izlaz<<"GRAD: "<<tt.grad<<endl;

return izlaz;
    }
ostream& operator<<(ostream& izlaz, const Takmicar& t){

    izlaz<<"Takmicar - ispis"<<endl;
    izlaz<<"VREME:"<<t.vreme<<endl;
    izlaz<<"PREZIME: "<<t.prezime<<endl;
    izlaz<<"KLUB: "<<t.klub<<endl;
    izlaz<<"GODISTE: "<<t.godiste<<endl;
    izlaz<<"KATEGORIJA: "<<t.k<<endl;

return izlaz;
}
ostream& operator<<(ostream& izlaz, const Camac& c){

    izlaz<<"Camac - ispis"<<endl;
    izlaz<<"VELICINA:"<<c.velicina<<endl;
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
    TipTakmicenja tt("Srbija", "Novi Sad", "Drzavno prvenstvo");
   // cout << tt << endl;
    Takmicar t(50,"Tatalovic","VKD",2003,kadeti);
    //cout << t << endl;
    Camac c(4 , "Rimen");
   // cout << c << endl;
    Osoblje o(25,"Pera","Neko", true);
    Osoblje o1(27,"Nikola","Neko",false);
    Osoblje o2(28,"Marko","Neko",true);
    Doktor d(26,"Marko","Maric",true,false);
    d.DodajOsoblje(o);
    d.DodajOsoblje(o1);
    d.DodajOsoblje(o2);
    d.IspisiOsoblja();
    //d.IspisOsoblje();
    d.BrisanjeOsoblja();
    d.IspisiOsoblja();
    d.Pretraga();
    d.Pauza();
    o.godina();
    citajTxt("osoblje.txt");
    //Predlog funkcionalnosti: Simuliranje trke u veslanju.
    return 0;
}
