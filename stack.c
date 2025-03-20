#include "stack.h"

void stackAdd(address *S, infotype desimal){
	address temp;
	AllocElmt (&temp);
	IsiValueElmt (&temp , desimal);
	InsertAkhir( S, temp);
}

void deleteStack(address *S){
	infotype NilaiHapus;
	Del_Akhir ( S, &NilaiHapus);
}



