#include "rectangle.h"
use namespace std;

void get_rayon(){
  return this->rayon;
}

virtual cercle::float perimetre(){
  float peri = this->rayon * 3.14 * 2;
  return peri
}

virtual cercle::float surface(){
  float surf = 2 * 3.14 * this->cote * this->cote;
  return surf;    
}

  ostream& operator<<(ostream&s, cercle const&cr){
  s << "rayon ="<<cr.rayon() <<","<<"perimetre ="<<cr.perimetre() <<","<<"surface ="<<cr.perimeter() << endl;
  return s;
  }