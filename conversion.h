#ifndef CONVERSION_H
#define CONVERSION_H
#include <stdio.h>
#include "stack.h"
#include "linked.h"

// modul peminta input yang tervalidasi
int GetInput(char *Massage);

// mengambil nilai modulus 2
int modulus2(int Nilai);

// Membagi nilai dengan 2
void Bagi2(int *Nilai);

// Modul yang akan mengembalikan stack nilai binary
address makeBinaryStack(int desimal);

// Menampilkan nilai binary dari stack
void GetBinary(address S);

#endif


 
