#include <stdio.h>
#include <string.h>
#define MAX 24

typedef struct etudiant {
  char name[80];
  float ray;
  float info;
  float nuc;
  float elec;
  float eng;
  float anat;
  float result;
  float class;
} etudiant;

int main() {
  etudiant etudiant[MAX] = {
      {"khadija",       13.00, 10.00, 17.75, 17.00, 15.50, 19.90},
      {"rachid akkaoi", 13.00, 10.00, 13.38, 10.25, 15.00, 17.36},
      {"rachid",        11.50, 10.00, 15.13, 14.75, 11.50, 19.27},
      {"ali",           10.00, 09.00, 10.00, 11.50, 10.00, 11.81},
      {"khalid",        10.00, 10.00, 17.00, 16.00, 12.00, 18.36},
      {"attrach",       10.00, 11.00, 17.38, 16.75, 12.50, 18.10},
      {"radone",        16.00, 13.00, 18.00, 17.00, 13.00, 19.00},
      {"khawla",        12.50, 13.00, 17.88, 16.50, 14.00, 19.54},
      {"intissar",      11.50, 10.00, 16.25, 11.57, 16.50, 19.81},
      {"monsif",        10.00, 10.00, 10.88, 14.00, 15.50, 18.00},
      {"khawla2",       12.00, 11.00, 19.25, 16.50, 14.50, 19.90},
      {"mina",          15.00, 08.00, 13.50, 13.00, 12.00, 19.27},
      {"hasnae",        11.50, 10.00, 15.38, 17.00, 11.00, 19.62},
      {"ayoub",         16.00, 10.00, 12.25, 12.75, 12.50, 15.72},
      {"farah",         11.00, 10.00, 18.50, 15.00, 15.50, 19.63},
      {"abdmjid",       13.00, 13.00, 16.75, 15.50, 10.00, 18.00},
      {"hajar",         10.00, 12.00, 16.75, 12.00, 15.50, 19.72},
      {"hannae",        10.00, 10.00, 12.25, 10.00, 10.00, 16.90},
      {"fatima",        14.00, 08.00, 12.25, 15.50, 15.00, 18.78},
      {"youssef",       14.50, 12.00, 16.88, 14.50, 13.50, 19.72},
      {"hind",          14.50, 09.00, 15.00, 15.75, 12.50, 19.36},
      {"atman",         10.00, 10.00, 12.38, 12.25, 13.50, 14.00},
      {"maysa",         10.00, 13.00, 15.63, 10.00, 12.00, 19.63},
      {"zagir",         10.00, 10.00, 17.25, 11.75, 14.50, 19.36},
  };
  int sum = 6;
  for (int i = 0; i < MAX; i++)
    etudiant[i].result =
        (etudiant[i].ray + etudiant[i].info + etudiant[i].nuc +
         etudiant[i].elec + etudiant[i].eng + etudiant[i].anat) /
        sum;

  for (int i = 0; i < MAX - 1; i++)
    for (int j = i + 1; j < MAX; j++)
      if (etudiant[i].result < etudiant[j].result) {
        struct etudiant tmp = etudiant[i];
        etudiant[i] = etudiant[j];
        etudiant[j] = tmp;
      }

  for (int i = 0; i < MAX; i++)
    printf("%2d %02.02f \t %s\n", i + 1, etudiant[i].result, etudiant[i].name);

  return 0;
}
