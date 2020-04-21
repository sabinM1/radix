#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <time.h>
#include <vector>

std::ifstream fin("shuffle.in");
std::ofstream fout("radix.in");

int myrandom(int i) { return std::rand() % i; }

int main() {
  clock_t tStart = clock();
  std::srand(unsigned(std::time(0)));
  int array[1000]; // C-style array of integers
  for (int i = 0; i < 1000; i++) {
    fin >> array[i]; // sfin
  }
  std::vector<int> vec(array,
                       array + 1000); // build STL container from int array

  std::random_shuffle(array, array + 1000, myrandom);

  for (int i = 0; i <= 1000; i++) {
    fout << array[i] << " "; // rfout
  }

  printf("\n\nTimp: %.2f ms\n", (double)(clock() - tStart));
}
