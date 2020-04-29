#ifndef OSOBLJE_HPP_INCLUDED
#define OSOBLJE_HPP_INCLUDED

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
  {
  private:
    bool medicina;
  public:
    Doktor():Osoblje("50","marko","kra;jevic"), medicina(true){}
    Doktor(int g, string i, string prezime,int med):Osoblje(g,i,p),medicina(med){}

  };
  
  
  
  

};


#endif // OSOBLJE_HPP_INCLUDED
