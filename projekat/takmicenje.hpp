#ifndef TAKMICENJE_HPP_INCLUDED
#define TAKMICENJE_HPP_INCLUDED
#include "osoblje.hpp"
#include "tabela.hpp"
#include "camac.hpp"
class Takmicenje{
protected:
  Osoblje o;
  Tabela t;
  string trka;
  Camac c;
public:
  Takmicenje(string t,string i, string p, int g,int brP, double vr,int vel, string disc):o(g,i,p),t(brP,vr),c(vel,disc){

    trka=t;
  }

};


#endif // TAKMICENJE_HPP_INCLUDED
