/*
  Customer.hpp

  Include file for Customer class
*/

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "Rental.hpp"

#include <string>
#include <vector>

class Customer {
private:
    std::string name;
    std::vector<Rental> rentals;

public:

    // constructor
    Customer(const std::string& name);

    // customer name
    std::string getName() const;

    // add a new rental
    void addRental(const Rental& rental);

    // customer rental statement
    std::string statement() const;

  //calculates the amount for a rental
  double amountFor(const Rental& r) const;
};

#endif
