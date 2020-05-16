#ifndef OSOBLJE_HPP_INCLUDED
#define OSOBLJE_HPP_INCLUDED
#include <fstream>
#include <vector>
void citajTxt(string Osoblje)
{
    string linija;
    ifstream fajl (Osoblje);
    if (fajl.is_open())
    {
        while ( getline (fajl,linija) )
        {
            cout << linija << '\n';
        }
        fajl.close();
    }
    else
        cout << "Neuspesno otvoren fajl";

}

class Osoblje
{
protected:
    int godine;
    string ime, prezime;
    bool pauza=false;
public:
    static int gd;
    Osoblje(int g, string i, string p,bool pp)
    {
        godine=g;
        ime=i;
        prezime=p;
        pauza=pp;
    }
    string getIme()
    {
        return ime;
    }
    string getPrezime()
    {
        return prezime;
    }
    void ispis()
    {

        citajTxt("Osoblje.txt");

    }

    void godina()
    {
        gd=gd+godine;
        cout<< "Ukupan broj godina osoblja je: " << gd << endl;

    }
    virtual void Pauza()
    {
        pauza=true;
    }
    virtual void IspisOsoblje()
    {

        cout << "Ja se zovem: " << ime <<" "<< prezime << " , imam " << godine;

    }

    friend ostream& operator<<(ostream& izlaz, const Osoblje& o);

};




class Doktor: public Osoblje
{
protected:
    bool medicina;
    vector <Osoblje*> osoblje;
public:

    Doktor(int g, string i, string p,bool med,bool pp):Osoblje(g,i,p,pp),medicina(med) {}

    string getIme()
    {
        return ime;
    }
    string getPrezime()
    {
        return prezime;
    }

    void Pauza()
    {
        if(pauza)
        {
            Osoblje::Pauza();
            cout << "Imaju pauzu." << endl;
        }
        else
            cout << "Nemaju pauzu." << endl;
    }
    void IspisOsoblje()
    {

        Osoblje::IspisOsoblje();

        cout << " i moja profesija je doktor." << endl;

    }



    void IspisiOsoblja()
    {
        for(auto it=osoblje.begin(); it!=osoblje.end(); it++)
            cout << **it;

    }
    void DodajOsoblje(Osoblje &o)
    {
        osoblje.push_back(&o);
        cout << "Dodata osoba: " << endl;
    }
    void BrisanjeOsoblja()
    {
        string line1, line2;
        cin >> line1 >> line2;
        for(auto i = osoblje.begin(); i != osoblje.end(); i++)
            if((*i) -> getIme() == line1 && (*i) -> getPrezime() == line2)
            {
                osoblje.erase(i);
                cout << line1 << " " << line2 << " je obrisan/a." << endl;
                return;
            }
        cout << line1 << " " << line2 << " nije obrisan/a." << endl;


    }
    void Pretraga()
    {
        string line1, line2;
        cin >> line1 >> line2;
        for(auto i = osoblje.begin(); i != osoblje.end(); i++)
            if((*i) -> getIme() == line1 && (*i) -> getPrezime() == line2)
            {
                cout << **i;
            }
    }
};







#endif // OSOBLJE_HPP_INCLUDED
