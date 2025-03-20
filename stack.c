#include "stack.h"

void CreateStack(address *S) {
    *S = Nil; // Initialize stack to empty
}

void stackAdd(address *S, infotype desimal){
	address temp;
	AllocElmt(&temp);
	IsiValueElmt(&temp, desimal);
	
	if (isEmpty(*S)) {
	    // If stack is empty, just assign the new node
	    *S = temp;
	} else {
	    // Otherwise, insert at the end (top of stack)
	    InsertAkhir(S, temp);
	}
}

void deleteStack(address *S){
	if (!isEmpty(*S)) {
	    infotype NilaiHapus;
	    
	    // If there's only one element
	    if (isEmpty(next(*S))) {
	        NilaiHapus = info(*S);
	        DeAlokasi(S);
	        *S = Nil;
	    } else {
	        // Otherwise, delete from the end (top of stack)
	        Del_Akhir(S, &NilaiHapus);
	    }
	}
}
