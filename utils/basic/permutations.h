#ifndef P_H
#define P_H


//#include <vector>
#include <set>
#include <iostream>
#include <fstream>
#include <iterator>
#include "boost/tuple/tuple.hpp"
#include "boost/tuple/tuple_io.hpp"
#include "boost/tuple/tuple_comparison.hpp"

using namespace std;

typedef boost::tuples::tuple<int, int, int> T;







class CoefTable
{
public:
void makeCoTable(int diam);
void makeMcoTable(int coefBound);
//T getNextCoefs();
//T getNextMco();
int getCotSize();
int getMtSize();
private:
//void filter(int x, int y, int z);
set<T> holdingTank;
int cotSize;
int mtSize;
};

class GenTable
{
public:
void makeGenTable(int genBound);
//T getNextGen();
int getGsize();
private:
int gSize;
};



T getNextGens(int index);


#endif