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
    izlaz<<"DRZAVA:"<<tt.drzava<<endl;
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

int main()
{
    TipTakmicenja tt("Srbija", "Novi Sad", "Drzavno prvenstvo");
    cout << tt << endl;
    Takmicar t(50,"Tatalovic","VKD",2003,kadeti);
    cout << t << endl;
    Camac c(4 , "Rimen");
    cout << c << endl;
    Osoblje o(25,"Neko","Neko");
    o.godina();
    citajTxt("osoblje.txt");
    //Predlog funkcionalnosti: Simuliranje trke u veslanju.
    return 0;
}
