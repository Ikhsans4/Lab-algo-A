//struktur program
#include<stdio.h>//header

int main(){//body

    printf("Shannaro!");//statement



//cara compile program 
/*
    gcc Main.c -o Main
    gcc -Wall -o Main Main.c
    gcc -Wall main -o Main.c
*/

//cara membuat komentar
//cara 1
/* 
    cara 2
    komentar yang lebih dari 1 baris
    ini kementar yang lebih dari 1 baris
    misalnya ini tambahan komentar
*/


//tipe data (dasar,turunan,bentukan)
/*
int (bilangan bulat misalnya 12)
float (bilangan berkoma 2.5)
long (sama kayak)
double (bilangan berkoma, size 8 byte)
char (untuk  menyimpan karakter)
boolean (false/true)
hexadesimal 
oktadesimal

*/
//contoh int
// int bilanganBulat = 12;
// printf("nilai dari bilangan bulat adalah : %d", bilanganBulat);
// printf("size dari int : %d", sizeof(bilanganBulat));

// //contoh float
// float bilanganBerkoma = 2.5;
// const float phi = 3.14;

// printf("bilangan berkoma %f, nilai variabel phi %f", bilanganBerkoma, phi);

//cara deklarasi variabel 
char nama;
int a;
int b;
int c;
// int a, b, c;


//assignment(deklarasi plus kasih nilai)
// int x = 10;
// char kalimat[20] = "otong bon ipun";


//aturan penulisan variabel
// tipe data - nama varibael - isi varibelnya ;
// int Banyak;
// int banyak;


// //fungsi output
// printf("");
// puts("");

// //fungsi input
// scanf("");
// // fgets("");

//operator(aritmatic, assisgnment/penugasan, relational/perbandingan, logical, increment & decrement)
// aritmatika (+, -, *, /, %)
a = 5 ;
b = 2 ;


c = a + b ; 
c = a - b ;
c = a / b ;
c = a * b ;
c = a % b ;

printf("\nnilai c adalah : %d", c);


//operator penugasan (assignment)
c += 5;
printf("\nnilai c adalah : %d", c);

//operator relational
// if(c>b){
//     printf("print sesuatu sini");
// }

// if(c != b){
//     printf("print sesuatu sini");
// }



//conditional
int uang;

switch (uang)
{
case 1000:
    printf("padjnadk");
    break;
case 2000:
    printf("padjnadk");
    break;
case 3000:
    printf("padjnadk");
    break;

default:
    break;
}

    return 0;
}




