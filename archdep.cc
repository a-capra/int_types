// c++ -std=c++17 -Wall -Wextra -Wpedantic -O3 -o archdep archdep.cc

#include <cstdio>
#include <climits>
#include <cfloat>

int main(int , char** )
{
  printf("Number of BITS in a BYTE: %i\n",CHAR_BIT);
  printf("Number of BITS in a BYTE: %d\n",CHAR_BIT);
  puts("");
  printf("The minimum value of CHAR               = %d\n", CHAR_MIN);
  printf("The maximum value of CHAR               = %d\n", CHAR_MAX); 
  puts("");
  printf("The minimum value of INT                = %d\n", INT_MIN);
  printf("The maximum value of INT                = %d\n", INT_MAX);
  puts("");
  printf("The minimum value of SHORT INT          = %d\n", SHRT_MIN);
  printf("The maximum value of SHORT INT          = %d\n", SHRT_MAX); 
  printf("The maximum value of UNSIGNED SHORT INT = %d\n", SHRT_MAX);
  puts("");
  printf("The minimum value of LONG INT           = %ld\n", LONG_MIN);
  printf("The maximum value of LONG INT           = %ld\n", LONG_MAX);
  printf("The maximum value of UNSIGNED LONG INT  = %lu\n", ULONG_MAX);
  puts("");
  printf("The minimum value of FLOAT              = %e\n", FLT_MIN );
  printf("The maximum value of FLOAT              = %e\n", FLT_MAX );
  printf("The minimum value of DOUBLE             = %e\n", DBL_MIN );
  printf("The maximum value of DOUBLE             = %e\n", DBL_MAX );
  printf("The minimum value of LONG DOUBLE        = %Le\n", LDBL_MIN );
  printf("The maximum value of LONG DOUBLE        = %Le\n", LDBL_MAX );
  puts("");
  printf("size of char               = %lu bytes = %lu bits\n", sizeof(char),sizeof(char)*CHAR_BIT); 
  puts("");
  printf("size of int                = %lu bytes = %lu bits\n", sizeof(int),sizeof(int)*CHAR_BIT); 
  printf("size of unsigned int       = %lu bytes\n", sizeof(unsigned int)); 
  puts("");
  printf("size of short int          = %lu bytes = %lu bits\n", sizeof(short int),sizeof(short int)*CHAR_BIT);
  printf("size of unsigned short int = %lu bytes\n", sizeof(unsigned short int));
  printf("size of long int           = %lu bytes = %lu bits\n", sizeof(long int),sizeof(long int)*CHAR_BIT);
  printf("size of unsigned long int  = %lu bytes\n", sizeof(unsigned long int));
  puts("");
  printf("size of float              = %lu bytes  = %lu bits\n", sizeof(float),sizeof(float)*CHAR_BIT); 
  printf("size of double             = %lu bytes = %lu bits\n", sizeof(double),sizeof(double)*CHAR_BIT); 
  printf("size of long double        = %lu bytes = %lu bits\n", sizeof(long double),sizeof(long double)*CHAR_BIT);
  puts("");
  printf("size of size_t             = %lu bytes = %lu bits\n", sizeof(size_t),sizeof(size_t)*CHAR_BIT); 
  
  return 0;
}
