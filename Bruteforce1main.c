#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
  bool ketemu=false;
  int cariLength;
  int kataLength;
  int i,a;
  int indeks;
  char cari[20];
  
  //String
  char kata[100];
  printf("TUGAS BESAR ANALISIS ALGORITMA \n");
  printf("Di buat Oleh : - Mochamad Irfan Mardani (10112240)\n");
  printf("               - Fahrul Rizaldi         (10112272)\n");
  printf("               - Teddy Khairul Jamil    (10112282)\n\n\n");
  
  printf("String Matching Dengan Algoritma Brute Force\n");
  printf("--------------------------------------------\n");
  printf("Masukkan sebuah teks = ");
  fflush(stdin);
  gets(kata);

  //Pola yang dicari
  printf("Masukkan pattern = ");
  fflush(stdin);
  gets(cari);

  //strlen = fungsi untuk mendapatkan panjang string
  cariLength = strlen(cari);
  kataLength = strlen(kata); 

  //Mulai Brute Force dalam Pencarian String
  
  for(i=0;i<=kataLength-cariLength;i++)
  {
    int j=0;
    while(j<cariLength && kata[i+j] == cari[j])
    {
      j++; 
      if(j >= cariLength)
      {
        for(a=0; a<cariLength ; a++)
        {   
        indeks = i+a;
        printf(" %c DItemukan Pada Indeks = ke-%d \n",cari[a],indeks);
        ketemu=true;
        }
      }
    } 
  }
  
  if(ketemu==false)
      {
         printf("Pola tidak ditemukan");
      }
  //Akhir Brute Force Pattern Matching
 
  getch();
  return 0;
}
