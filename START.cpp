#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iterator>
#include <time.h>
#include <vector>

using namespace std;

ofstream sfout("shuffle.in"); // auxxx
ifstream sfin("shuffle.in");  // shuffle
ofstream rfout("radix.in");   // shuffle
ifstream rfin("radix.in");    // radix
ofstream rrfout("radix.out"); // radix

///////////////////// CATE ELEMENTE??
#define NR_ELEM /*517944 Este numarul maxim de elemente*/ 100
/////////////////////

//------- shuffle functie
long myrandom(long i) { return std::rand() % i; }
//-------

//------------ radix clasa

class radix_test {
  const int bit; // bit position [0..31] to examine
public:
  radix_test(long offset) : bit(offset) {} // constructor

  bool operator()(long value) const // function call operator
  {
    if (bit == 31)      // sign bit
      return value < 0; // negative int to left partition
    else
      return !(value & (1 << bit)); // 0 bit to left partition
  }
};
//------------

//-------------- radix 2v

// Least significant digit radix sort
void lsd_radix_sort(long *first, long *last) {
  for (int lsb = 0; lsb < 32; ++lsb) // least-significant-bit
  {
    std::stable_partition(first, last, radix_test(lsb));
  }
}

// Most significant digit radix sort (recursive)
// void msd_radix_sort(long *first, long *last, int msb = 31) {
//   if (first != last && msb >= 0) {
//     long *mid = std::partition(first, last, radix_test(msb));
//     msb--;                           // decrement most-significant-bit
//     msd_radix_sort(first, mid, msb); // sort left partition
//     msd_radix_sort(mid, last, msb);  // sort right partition
//   }
// }

//--------------

void auxxx() {
  for (long i = 1; i <= NR_ELEM; i++)
    sfout << i << " ";
  sfout.close();
}

void shuffle() {
  std::srand(unsigned(std::time(0)));
  long array[NR_ELEM]; // C-style array of integers
  for (long i = 0; i < NR_ELEM; i++) {
    sfin >> array[i]; // sfin
  }
  std::vector<long> vec(array,
                        array + NR_ELEM); // build STL container from int array

  std::random_shuffle(array, array + NR_ELEM, myrandom);

  for (long i = 0; i <= NR_ELEM; i++) {
    rfout << array[i] << " "; // rfout
  }
  sfin.close();
  rfout.close();
}

void radix() {
  long data[NR_ELEM];
  for (long i = 0; i < NR_ELEM; i++) {
    rfin >> data[i]; // rfin
  }

  lsd_radix_sort(data, data + NR_ELEM);
  // msd_radix_sort(data, data + 8);

  std::copy(data, data + NR_ELEM,
            std::ostream_iterator<long>(rrfout, " ")); // rrfout
  rfin.close();
  rrfout.close();
}

int main() {
  clock_t tStart = clock();
  auxxx();
  shuffle();
  radix();
  printf("\n\nTimp: %.2f ms\n", (double)(clock() - tStart));
  return 0;
}
