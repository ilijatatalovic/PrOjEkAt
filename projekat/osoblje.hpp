#ifndef OSOBLJE_HPP_INCLUDED
#define OSOBLJE_HPP_INCLUDED
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

<<<<<<< HEAD
}

=======
>>>>>>> 33d36fbcbe836dbcb495a520b640673447fac27b
class Osoblje{
  protected:
int godine;
string ime, prezime;
 public:
  Osoblje(int g, string i, string p)
  {
  godine=g;
  ime=i;
  prezime=p;
  }
<<<<<<< HEAD
  void ispis(){

  citajTxt("Osoblje.txt");

  }

};
class Doktor:public Osoblje
=======
  Osoblje()
  {
  godine=0;
  ime="";
  prezime="";
  }
  Osoblje(const osoblje& o)
  {
  godine=o.godine;
  ime=o.ime;
  prezime=o.prezime;
  }
 
  
  
  
  
  
  
  
  class Doktor: public Osoblje
>>>>>>> 33d36fbcbe836dbcb495a520b640673447fac27b
  {
  private:
    bool medicina;
  public:
<<<<<<< HEAD

    Doktor(int g, string i, string p,bool med):Osoblje(g,i,p),medicina(med){}



=======
    Doktor():Osoblje("50","marko","kra;jevic"), medicina(true){}
    Doktor(int g, string i, string prezime,int med):Osoblje(g,i,p),medicina(med){}

  };
  
  
  
  
>>>>>>> 33d36fbcbe836dbcb495a520b640673447fac27b

};


#endif // OSOBLJE_HPP_INCLUDED
