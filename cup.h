#include <iostream>

class Cup {
  public:

    Cup();
    Cup(const std::string &drink_type, double fluid_oz);
    double Drink(double drink_amount);
    double Refill(double refill_amount);
    void NewDrink(const std::string &drink_type,double fluid_oz);
    void Empty();
    double GetFluidOz();
    std::string GetDrinkType();

 private:

    std::string drink_type_;
    double fluid_oz_;
};
