/*
  Rental.hpp

  Include file for Rental class
*/

#ifndef RENTAL_H
#define RENTAL_H

#include "Video.hpp"

class Rental {
private:
    Video movie;
    int days;

public:

    // constructor
    Rental(const Video& movie, int days_rented);

    // days rented
    int getDaysRented() const;

    // movie rented
    const Video& getVideo() const;
};

#endif
