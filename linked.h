#ifndef linked_H
#define linked_H
#include <stdio.h>
#include <malloc.h>
#include "boolean.h"

#define info(P) (P)->info
#define next(P) (P)->next
#define Nil NULL

typedef int infotype; // membuat alias bernama infotype, tujaannya agar program ADT dapat beradaptasi dengan tipe data lain
typedef struct tElmtList *address;
typedef struct tElmtList {
	infotype info;
	address  next;
 } ElmtList;

boolean isEmpty(address p);

void AllocElmt (address *p);

void IsiValueElmt (address *p , infotype nilai);

void TampilList (address p);

void InsertAwal (address *p, address PNew);

void InsertAkhir (address *p, address PNew);

address Search (address p, infotype nilai);

void InsertAfter (address * pBef, address PNew);

void InsertBefore (address * pAft, address * p, address PNew);

void Del_Awal (address * p, infotype * X);

void Del_Akhir (address * p, infotype * X);

void Del_After (address * pBef, infotype * X);

void ClearList (address *p);

void DeAlokasi (address * p);

int NbElmt (address p);

infotype Min (address p);

infotype Rerata (address p);

address BalikList (address p);

void Modify_First (address *p, infotype nilai_baru);

void Modify_After (address pBef, infotype nilai_baru);

void Modify_Last (address p, infotype nilai_baru);

#endif

