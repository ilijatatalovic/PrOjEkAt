#ifndef CAMAC_HPP_INCLUDED
#define CAMAC_HPP_INCLUDED
class Camac{
private:
  int velicina;
  string disciplina;
public:
  Camac(int vel,string disc){
velicina=vel;
disciplina=disc;
}
  friend ostream& operator<<(ostream& izlaz, const Camac& c);
};


#endif // CAMAC_HPP_INCLUDED
