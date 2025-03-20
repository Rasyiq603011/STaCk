#ifndef STACK_H
#define STACK_H
#include "linked.h"

// Membuat 
void CreateStack();

// Insert Khusus stack dimana selalu insert di Akhir
void stackAdd(address *S, infotype desimal);

// delete Kuhus stack dimana selalu delete diakhir
void deleteStack(address *S);


#endif
