#ifndef CONVERSION_H
#define CONVERSION_H
#include <stdio.h>
#include "stack.h"
#include "linked.h"

// modul peminta input yang tervalidasi
int GetInput(char *Massage);

// mengambil nilai modulus 2
int modulus2(int Nilai);


void Bagi2(int *Nilai);

// Modul recursive yang akan mengembalikan stack nilai desimal
address *makeBinaryStack(int desimal);

void GetBinary(address S);

#endif







 
