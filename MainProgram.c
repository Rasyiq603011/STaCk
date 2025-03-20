#include "conversion.h"

int main(int argc, char *argv[]) {
	address Binary;
	int Nilai = GetInput("Masukan Nilai Desimal: ");
	Binary = makeBinaryStack(Nilai);
	GetBinary(Binary);
	
	return 0;
}
