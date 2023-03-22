#include "classe_point.h"
using namespace std;

point::point(){
  this->x = 0;
  this->y = 0;
}
point::point(float _x, float _y){
  this->x = _x;
  this->y = _y;
}
point::point(point const& pt){
  this->x = pt.x;
  this->y = pt.y;
}

//accesseurs
float point::get_x() const{
  return this->x;
}
float point::get_y() const{
  return this->y;
}

//Mutateur
void point::set_x(float _x){
  this->x = _x;
}
void point::set_y(float _y){
  this->y = _y;
}

//Methode
void point::translater (point pt){
  this->x = this->x + pt.x;
  this->y = this->y + pt.y;
}
void point::translater (float _x, float _y){
  this->x = this->x + _x;
  this->y = this->y + _y;
}

//operateurs
ostream& operator<<(ostream&s, point const&pt){
  s << pt.get_x() <<";"<< pt.get_y() << endl;
  return s;
}

void point::operator+=(point const& pt){
  this->x += pt.x;
  this->y += pt.y;
}