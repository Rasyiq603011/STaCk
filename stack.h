#ifndef STACK_H
#define STACK_H
#include "linked.h"


// Membuat stack baru (empty)
void CreateStack(address *S);

// Insert Khusus stack dimana selalu insert di Akhir
void stackAdd(address *S, infotype desimal);

// delete Khusus stack dimana selalu delete diakhir
void deleteStack(address *S);

#endif

