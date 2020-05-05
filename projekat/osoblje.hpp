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
  Osoblje(int g, string i, string p)
  {
  godine=g;
  ime=i;
  prezime=p;
  }
  void ispis(){

  citajTxt("Osoblje.txt");

  }

};
class Doktor:public Osoblje
  {
  private:
    bool medicina;
  public:

    Doktor(int g, string i, string p,bool med):Osoblje(g,i,p),medicina(med){}




};


#endif // OSOBLJE_HPP_INCLUDED
