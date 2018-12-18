#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <string>

using std::cout;
using std::endl;
using std::setw;
using std::cin;
using std::string;

void PrintArray(int array[], int size);

unsigned int IndexOfMinModuloElement(int a[], int const size);

int SumAfterSubzeroElement(int a[], int const size, int first_subzero);

bool InInterval(int x, int a, int b);

void CutArray(int ar[], int a, int b, int const size, int B[]);