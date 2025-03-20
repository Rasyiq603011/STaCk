#include "linked.h"

boolean isEmpty(address p){
	return (p == Nil);
}

void AllocElmt (address *p){
	*p = (address) malloc (sizeof(ElmtList));
	
	if (*p == Nil) {
            printf("Alokasi memori gagal!\n");
            return;
        }
}

void IsiValueElmt (address *p , infotype nilai){
	if (!isEmpty(*p)){
		info(*p) = nilai;
		next(*p) = Nil;
	}
	else
	{
		printf("Memory belum dialokasikan");
	}
}

void TampilList (address p){
	
	while (true){
		if (!isEmpty(p)){
			printf(" %d --> ", info(p));
			p = next(p);	
		}
		else{
			printf(" NULL ");
				break;
		}
		
	}
}

void InsertAwal (address *p, address PNew){
	if(!isEmpty(*p)){
		next(PNew) = *p;
	}
	*p = PNew;
	
}

void InsertAkhir (address * p, address PNew){
	
	address temp = *p;
	while (true){
		if (isEmpty(next(temp))){
			next(PNew) = Nil;
			next(temp) = PNew;
			break;
		}
		else{
			temp = next(temp);
		}
		
	}
}

address Search (address p, infotype nilai){
	while (true){
		if (!isEmpty(p)){
			if (info(p) == nilai){
				return p;
			}
			else{
				p = next(p);
			}	
		}
		else{
			return Nil;
		}
		
	}
}

void InsertAfter (address * pBef, address PNew){
	
	next(PNew) = next(*pBef);
	
	next(*pBef) = PNew;
}

void InsertBefore (address * pAft, address * p, address PNew){
	
	address temp = *p;
	if (!isEmpty(temp)){
		while(true){
			if (next(temp) == *pAft ){
				next(PNew) = *pAft;
				next(temp) = PNew;
				break;		
			}
			else{
				temp = next(temp);
			}
		}
		
	}	
}

void Del_Awal (address * p, infotype * X){
	
	if(isEmpty(*p)){
		printf("\nList Kosong Tidak bisa menghapus\n");
		return;
	}
	
	address temp = *p;
	*p = next(*p);
	
	*X = info(temp);
	DeAlokasi(&temp);
	
	
}

void Del_Akhir (address * p, infotype * X){
	
	address temp = *p;
	while (true){
		if (!isEmpty(temp)){
			if (isEmpty(next(next(temp)))){
				*X = info(next(temp));
				DeAlokasi(&(next(temp)));
				next(temp) = Nil;
				break;
			}
			else{
				temp = next(temp);
			}
		}
		else{
			printf("\nList Kosong Tidak bisa menghapus\n");
			return;
		}
		
	}
}

void Del_After (address * pBef, infotype * X){
	

	*X = info(next(*pBef));
	address temp = next(*pBef);
	next(*pBef) = next(next(*pBef));
	DeAlokasi(&temp);
}

void ClearList (address *p){
	
	if(isEmpty(*p)){
		printf("List Kosong Tidak bisa menghapus");
		return;
	}
	
	infotype Hapus;
	while (!isEmpty(*p)){
		Del_Awal(p, &Hapus);
		printf("Node dengan isi %d telah dihapus!\n\n", Hapus);
	}
	printf("\nList Telah Kosong Head menunjuk kembali ke Nil\n");
}

void DeAlokasi (address * p){
	free(*p);
}

int NbElmt (address p){

	if (!isEmpty(p)){
		return (1 + NbElmt(next(p)));
	}
	else{
		return 0;
	}
}

infotype Min (address p){
	
	infotype temp = 0;
	while (true){
		if (!isEmpty(p)){
			if (temp == 0){
				temp = info(p);
				p = next(p);
			}
			if (info(p) <= temp){
				temp = info(p);
			}
			p = next(p);
		}
		else{
			return temp;
		}
		
	}
}

infotype Rerata (address p){
	
	infotype jumlah = 0;
	infotype banyakData = 0;
	while (true){
		if (!isEmpty(p)){
			banyakData++;
			jumlah += info(p);
			p = next(p);
		}
		else{
			if (banyakData == 0){
				return 0;
			}
			else{
				return (jumlah/banyakData);
			}
		}		
	}	
}

address BalikList (address p){
	
	address temp = next(p);
	address reverse = next(next(p));
	next(p) = Nil;
	
	if (!isEmpty(p)){
		while(true){
			next(temp) = p;
			p = temp;
			temp = reverse;
			reverse = next(reverse);
				
			if (isEmpty(next(reverse))){
				next(temp) = p;
				next(reverse) = temp;
				return reverse;
			}
		}		
	}
	else{
		printf("List Kosong");
	}		
}

void Modify_First (address *p, infotype nilai_baru) {
    if (!isEmpty(*p)) {
        info(*p) = nilai_baru;
    } else {
        printf("List Kosong");
    }
}

void Modify_After (address pBef, infotype nilai_baru) {
    if (!isEmpty(pBef) && !isEmpty(next(pBef))) {
        info(next(pBef)) = nilai_baru;
    } else {
        printf("Node tidak ditemukan");
    }
}

void Modify_Last (address p, infotype nilai_baru) {
    address temp = p;
    
    if (isEmpty(temp)) {
        printf("List Kosong");
        return;
    }
    while (!isEmpty(next(temp))) {
        temp = next(temp);
    }
    info(temp) = nilai_baru;
}




