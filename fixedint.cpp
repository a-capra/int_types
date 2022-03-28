#include <cstdint> // https://cplusplus.com/reference/cstdint/
#include <climits> // https://cplusplus.com/reference/climits/

#include <cmath>

#include <iostream>
#include <iomanip>
using namespace std;

int main(int,char**)
{
    cout << setfill(' ') << setw(26) << left << "Number of bits in a byte:" << CHAR_BIT << endl;
    cout << setfill(' ') << setw(26) << left << "Size of char:" << sizeof(char) << " byte" << endl;

    // intmax_t	uintmax_t
    // int8_t	uint8_t	

    cout << setfill(' ') << setw(26) << left << "Size of int16_t"  << sizeof(int16_t) << " bytes" << endl;
    cout << setfill(' ') << setw(26) << left << "Size of uint16_t" << sizeof(uint16_t) << " bytes" << endl;

    cout << setfill(' ') << setw(26) << left << "Min value of int16_t" << INT16_MIN << " = -2^(16-1) = " << -pow(2,16-1) << endl;
    cout << setfill(' ') << setw(26) << left << "Max value of int16_t" << INT16_MAX << " = 2^(16-1)-1 = " << pow(2,16-1)-1 << endl;
    cout << setfill(' ') << setw(26) << left << "Max value of uint16_t" << UINT16_MAX << " = 2^(16-1) = " << pow(2,16)-1 << endl;

    
    //int32_t	uint32_t
    //int64_t	uint64_t

    // INTMAX_MIN	Minimum value of intmax_t	-(263-1), or lower
    // INTMAX_MAX	Maximum value of intmax_t	263-1, or higher
    // UINTMAX_MAX	Maximum value of uintmax_t	264-1, or higher

    // INTN_MIN	Minimum value of exact-width signed type	Exactly -2^(N-1)
    // INTN_MAX	Maximum value of exact-width signed type	Exactly 2^(N-1)-1
    // UINTN_MAX	Maximum value of exact-width unsigned type	Exactly 2^N-1

    return 0;
}