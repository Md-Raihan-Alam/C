/**
Deoxyribonucleic acid, DNA is the primary information storage molecule in biological systems. It is composed of four nucleic acid bases Guanine ('G'), Cytosine ('C'), Adenine ('A'), and Thymine ('T').

Ribonucleic acid, RNA, is the primary messenger molecule in cells. RNA differs slightly from DNA its chemical structure and contains no Thymine. In RNA Thymine is replaced by another nucleic acid Uracil ('U').

Create a function which translates a given DNA string into RNA.

For example:

"GCAT"  =>  "GCAU"
The input string can be of arbitrary length - in particular, it may be empty. All input is guaranteed to be valid, i.e. each input string will only ever consist of 'G', 'C', 'A' and/or 'T'.
**/
#include <stdlib.h>
#include <string.h>
#include<stdio.h>
char *dna_to_rna(const char *dna)
{
    char *RNA=(char *) calloc(strlen(dna),sizeof(char));
    unsigned long i;
    for(i=0;i<strlen(dna);i++){
        if(dna[i]=='G') RNA[i]='G';
        if(dna[i]=='C') RNA[i]='C';
        if(dna[i]=='A') RNA[i]='A';
        if(dna[i]=='T') RNA[i]='U';
    }
    RNA[i]=0;
  printf("DNA=%s\n",dna);
  printf("RNA=%s\n",dna);
    return RNA;
  free(RNA);
}
int main(){
    dna_to_rna("GGTGGCAGAGGCATACCGAGCATT");
    return 0;
}
