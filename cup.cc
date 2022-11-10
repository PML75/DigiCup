#include "cup.h"

#include <iostream>

Cup::Cup(): Cup("Water",16.0){}
Cup::Cup(const std::string &drink_type, double fluid_oz)
{
  drink_type_ = drink_type;
  fluid_oz_ = fluid_oz;
}
double Cup::Drink(double drink_amount) 
{
  if (drink_amount >= fluid_oz_) 
  {
    fluid_oz_ = 0;
  }
  else 
  {
    fluid_oz_ -= drink_amount;
  }
  return fluid_oz_;
}
double Cup::Refill(double refill_amount) 
{
  fluid_oz_ += refill_amount;
  return fluid_oz_;
}
void Cup::NewDrink(const std::string &drink_type,double fluid_oz) 
{
  drink_type_ = drink_type;
  fluid_oz_ = fluid_oz;
}
void Cup::Empty() 
{
  fluid_oz_ = 0;
  drink_type_ = "nothing";
}
double Cup::GetFluidOz() 
{
  return fluid_oz_;
}
std::string Cup::GetDrinkType() 
{
  return drink_type_;
}
