#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include "tuple.h"
#include <vector>
#include <map>
#include <fstream>
#include <iostream>
#include "subtraction.h"

typedef std::vector<T> Vec;

#include "../basic/subtraction.h"
#include "boost/tuple/tuple.hpp"
#include "boost/tuple/tuple_comparison.hpp"



typedef boost::tuples::tuple<int, int, int, int, int> TP;


typedef std::vector<TP> Vec;

using namespace boost::tuples;

class Subtractions;

class Polynomial{

   public:

      Polynomial();
      Polynomial(T &a, T &y);
      Polynomial(T a, int, int, int);
      Polynomial(TP a, TP y);
      Polynomial(TP a, int, int, int, int, int);
      Polynomial(const Polynomial&);

      TP A;
      TP Y;
      Subtractions s;


      int value()const;
      int sum()const;
      bool wellFormed()const;

      bool operator==(const Polynomial&);
      bool operator>=(const Polynomial&);
      bool operator!=(const Polynomial&);
      bool operator!=(int);
      Polynomial operator=(const Polynomial&);

      Polynomial operator-(Polynomial);
      Polynomial borrowB(Polynomial);
      Polynomial borrowC(Polynomial);

      friend std::ostream& operator<<(std::ostream&, const Polynomial&);
      friend std::ofstream& operator<<(std::ofstream&, const Polynomial&);
};


#endif
