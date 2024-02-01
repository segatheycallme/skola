/* Napisati program koji od korisnika trazi da pogodi broj od 1 do 100
 * Program pomaze korisniku porukama vece ili manje i broji broj pokusaja */
#include <stdio.h>

unsigned rand(unsigned lfsr) {
  unsigned bit = ((lfsr >> 0) ^ (lfsr >> 2) ^ (lfsr >> 3) ^ (lfsr >> 5)) & 1;
  return lfsr = (lfsr >> 1) | (bit << 15);
}

int main() {
  int unos, skriveni_broj, broj_pokusaja = 0;

  skriveni_broj = rand(unos + skriveni_broj + broj_pokusaja);
  skriveni_broj = skriveni_broj % 100;
  skriveni_broj += 1;
  unos = -1;

  printf("Pogadjajte broj od 1 do 100: ");

  while (unos != skriveni_broj) {
    scanf("%d", &unos);

    if (unos > skriveni_broj) {
      printf("Uneli ste prevelik broj\n\n");
      printf("Probajte ponovo: ");
    }
    if (unos < skriveni_broj) {
      printf("Uneli ste premali broj\n\n");
      printf("Probajte ponovo: ");
    }

    broj_pokusaja++;
  }

  printf("Uspeli ste da pogodite broj nakon %d pokusaja\n", broj_pokusaja);

  return 0;
}
