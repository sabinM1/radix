#include <fstream>
#include <iostream>

using namespace std;

ofstream fout("shuffle.in");

#define NR_ELEM 10000

int main() {
  for (int i = 1; i <= NR_ELEM; i++)
    fout << i << " "; // sfout
  return 0;
}
