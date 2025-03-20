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

address *makeBinaryStack(int desimal){
	address *Binary;
	int temp;
	while (desimal != 0){
		temp = modulus2(desimal);
		stackAdd(Binary,temp);
		Bagi2(&desimal);
	}
	return Binary;
}

void GetBinary(address S){
	address temp = BalikList (S);
	while (true){
		if (!isEmpty(temp)){
			printf("%d", info(temp));
			S = next(temp);	
		}	
	}
}

