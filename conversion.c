#include "conversion.h"

int GetInput(char *Massage){
	int Nilai;
	while(1){
		printf("%s", Massage);
		if (scanf("%d", &Nilai) == 1){
			break;
		}
		printf("Input yang anda masukan Salah!\n");
		fseek(stdin, 0, SEEK_END); // Biasanya berjalan di windows
	}
	return Nilai;
}

int modulus2(int Nilai){
	return Nilai%2;
}

void Bagi2(int *Nilai){
	*Nilai = *Nilai/2;
}

address makeBinaryStack(int desimal){
	address Binary = Nil; 
	int temp;
	

	if (desimal == 0) {
		address newNode;
		AllocElmt(&newNode);
		IsiValueElmt(&newNode, 0);
		return newNode;
	}
	
	while (desimal > 0){
		temp = modulus2(desimal);
		address newNode;
		AllocElmt(&newNode);
		IsiValueElmt(&newNode, temp);
		InsertAwal(&Binary, newNode);
		Bagi2(&desimal);
	}
	return Binary;
}

void GetBinary(address S){
	printf("Binary: ");
	
	if (isEmpty(S)) {
		printf("0"); 
		return;
	}

	address temp = S;
	while (!isEmpty(temp)) {
		printf("%d", info(temp));
		temp = next(temp);
	}
	printf("\n");
}

