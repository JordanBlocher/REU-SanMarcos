#include "../utils/basic/permutations.h"
#include "../utils/basic/polynomials.h"
#include "../utils/basic/subtraction.h"
#include "string.h"
#include "time.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
=======
>>>>>>> bc5063bd66096d6b57593c0fd596907451efdbb2

using namespace std;


int main(int argc, char *argv[])
{
    clock_t start, end;
<<<<<<< HEAD
    if(argc<3){
       std::cout<< "Usage: ./executables/tables diameter numprocs \n";
       return 0;
    }
    else{cout<<"Making Tables. "<<endl;
       start = clock();
       XCoTable XTable;
       GenTable GenTable;
       MCoTable MTable;
       XTable.makeXCoTable(atoi(argv[1]), atoi(argv[2]));
       cout<<"Made X-Coeffs\n";
      // MTable.makeMCoTable(atoi(argv[1]), 0, 0, atoi(argv[2]));
       cout<<"Made M-Coeffs\n";
       GenTable.makeGenTable(atoi(argv[1]));
       cout<<"Made Generators\n";
       end = clock();
       std::cout<<"Tables were generated in "<<(double)(end - start)/(double)CLOCKS_PER_SEC<<" seconds.\n";
       std::cout <<"\nSize of X-Coeff Table:" << XTable.size << "\nSize of Generator Table:" << GenTable.size  <<"\nSize of M-Coeff Table: "<<MTable.size<< endl;
=======
    if(argc<2){
       std::cout<< "Usage: ./executables/tables diameter \n";
       return 0;
    }
    else{
       start = clock();
       XCoTable XTable;
       GenTable GenTable;
       //std::cout << "Coefficients:";
       XTable.makeXCoTable(atoi(argv[1]));
      // C.makeMcoTable(atoi(argv[1]));
       //std::cout << "\n Generators: \n";
       GenTable.makeGenTable(atoi(argv[1]));
       end = clock();
       std::cout<<"Tables were generated in "<<(double)(end - start)/(double)CLOCKS_PER_SEC<<" seconds.\n";
       std::cout <<"\nSize of X-Coeff Table:" << XTable.size << "\nSize of Generator Table:" << GenTable.size  << endl;
>>>>>>> bc5063bd66096d6b57593c0fd596907451efdbb2
       
       return 0;
    }
}


