#include "conversion.h"

int main(int argc, char *argv[]) {
	address Binary = Nil; 
	int Nilai = GetInput("Masukan Nilai Desimal: ");
	
	Binary = makeBinaryStack(Nilai);
	GetBinary(Binary);
	

	ClearList(&Binary);
	
	return 0;
}
