#include "classe_point.h"
#include "forme.h"

using namespace std;

forme::forme(point const& pt){
  this->centre = pt;
}

point forme::get_centre() const{
  return this->centre;
}

void forme::translater (point pt){
  this->centre.set_x(this->centre.get_x() + pt.get_x());
  this->centre.set_y(this->centre.get_y() + pt.get_y());
}

void forme::operator+=(forme const& frm){
  this->centre.set_x(this->centre.get_x() + frm.get_centre().get_x());
  this->centre.set_y(this->centre.get_y() + frm.get_centre().get_y());
}

ostream& operator<<(ostream&s, forme const& frm){
  point pt = frm.get_centre();
  s << pt.get_x() <<";"<< pt.get_y() << endl;
  return s;
}
