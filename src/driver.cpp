#include "../utils/basic/permutations.h"
#include "../utils/basic/polynomials.h"
#include "../utils/basic/subtraction.h"
#include "string.h"
#define diamCubed 1000
#define xSize 286
using namespace std;
///*

/*
int main()
{
T next;
ifstream cot;
cot.open("cotable.txt");
if(!cot)
	cout << "Couldn't open" << endl;
else
{
while(!cot.eof())
{
	cot >> boost::tuples::set_open('(') >> boost::tuples::set_close(')') >> boost::tuples::set_delimiter(',') >> next;
	cout <<next;
}

}

}
*/
/*
int main()
{
CoefTable C;
GenTable G;
//std::cout << "Coefficients:";
C.makeCoTable(10); // takes diameter
C.makeMcoTable(10); //takes an arbitrary? bound
//std::cout << "\n Generators: \n";
G.makeGenTable(10); //arbitrary? bound
std::cout <<"\n cotSize:" << C.getCotSize() << "\n mtSize:" << C.getMtSize() << "\n gSize:" << G.getGsize() << endl;
return 0;
#include "../utils/basic/subtraction.h"

int main()
{
T A = T(2,12,12);
T B = T(0,3,2);
A.subtract(B);

}
*/
///*
int main()
{
const int diam = 10; //make sure this matches the diam used to generate the tables
const double lowerbound = (1000 / 16); // diam cubed over 16
Subtractions best[xSize]; //holds the xcos table's size many subtractions: gives the complete history
Subtractions temp[xSize];
bool cover[diamCubed]; // diam cubed: larger than needed, but hard to make sharp
bool covered =false;
int counter = 0; //index for the temp array
ifstream gens; // c, b, a
ifstream mcos; // gamma, beta, alpha
ifstream xcos; // x3, x2, x1
T A; //generators
T Q; //m coefs
T x; //x coefs
Polynomial X;
Polynomial M; //the bound itself
int m; //holds sum of M
int mbest = 0; //holds the highest valid m
gens.open("./permutationtables/gentable.txt");
if(gens)
{
	while(!gens.eof())
	{
		gens >> boost::tuples::set_open('(') >> boost::tuples::set_close(')') >> boost::tuples::set_delimiter(',') >> A;
		//cout << A << endl;
		mcos.open("./permutationtables/mcotable.txt");
		if(mcos)
		{
			while(!mcos.eof())
			{
				mcos >> boost::tuples::set_open('(') >> boost::tuples::set_close(')') >> boost::tuples::set_delimiter(',') >> Q;
				//cout << Q << endl;
				M = Polynomial(A, Q);
				m = M.sum();
				cout <<  m << endl;;
				memset(cover,false,diamCubed);
				cout << "memset success" << endl;
				if( m >= mbest)
				{
					xcos.open("./permutationtables/cotable.txt");
					counter = 0;
					if(xcos)
					{
							while(!xcos.eof())
							{
							cout << "in the while loop" << endl;
								xcos >> boost::tuples::set_open('(') >> boost::tuples::set_close(')') >> boost::tuples::set_delimiter(',') >> x;
							cout<< "read in"  << endl;
								//cout << x << endl;
								X = Polynomial(A, x);
							cout << "assigned poly" << endl;
							temp[counter].clear();
								subtract(X, M, temp[counter]);
							cout << "subtraction done" << endl;
								cover[X.sum()] = true;							
								++counter;
							}
						cout << "out of the while" << endl;
						xcos.close();
						cout << "xcos closed" << endl;
						covered = true;
						for(int i=0; i < m; ++i) //only check the first m of them
						{
							if(!cover[i]) //we are not covered
							{
								covered = false;
								break;
							}
						}
						if(covered)
						{
							mbest=m;
							for(int j =0; j < xSize; ++j)
								{
									best[j] = temp[j];
								}
							cout << m << endl << A  << endl;
						}
					}
				}
						
			}
			mcos.close();			
		}
	}
gens.close();
}
	
return 0;
}
//*/
