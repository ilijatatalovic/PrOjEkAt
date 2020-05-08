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

}

class Osoblje{
protected:
int godine;
string ime, prezime;
 public:
  static int gd;
  Osoblje(int g, string i, string p)
  {
  godine=g;
  ime=i;
  prezime=p;
  }
  void ispis(){

  citajTxt("Osoblje.txt");

  }

void godina(){
gd=gd+godine;
cout<< "Ukupan broj godina osoblja je: " << gd << endl;

}

};




  class Doktor: public Osoblje
  {
  private:
    bool medicina;
  public:

    Doktor(int g, string i, string p,bool med):Osoblje(g,i,p),medicina(med){}

  };







#endif // OSOBLJE_HPP_INCLUDED
