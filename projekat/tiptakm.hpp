#ifndef TIPTAKM_HPP_INCLUDED
#define TIPTAKM_HPP_INCLUDED

class TipTakmicenja{
protected:
  string drzava;
  string grad;
  string nivoTakmicenja;
public:
  TipTakmicenja(string drz,string grd,string nTak){
  drzava=drz;
  grad=grd;
  nivoTakmicenja=nTak;
  }
friend ostream& operator<<(ostream& izlaz, const TipTakmicenja& tt);

};


#endif // TIPTAKM_HPP_INCLUDED
