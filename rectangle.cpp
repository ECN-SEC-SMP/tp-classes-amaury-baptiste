#include "rectangle.h"
use namespace std;

void rectangle::get_longueur(){
  return this->longueur;
}
void rectangle::get_largeur(){
  return this->largeur;
}

virtual rectangle::float perimetre(){
  float peri = (this->longueur * 2) + (this->largeur * 2);
  return peri
}

virtual rectangle::float surface(){
  float surf = this->longueur * this->largeur;
  return surf;    
}

ostream& operator<<(ostream&s, rectangle const&cr){
  s << "longueur ="<<cr.get_longueur() <<","<<"largeur ="<<cr.get_largeur() <<","<<"perimetre ="<<cr.perimetre() <<","<<"surface ="<<cr.perimeter() << endl;
  return s;
  }