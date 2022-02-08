#include <stdio.h>
#include <string.h>
#define MAX 24

typedef struct etudiant {
  char name[80];
  float ray;
  float info;
  float nuc;
  float elec;
  float result;
  float class;
} etudiant;

int main() {
  int sum = 4;
  etudiant etudiant[MAX] = {
      {"khadija", 13.00, 10.00, 17.75, 17.00},
      {"rachid akkaoi", 13.00, 08.00, 13.38, 10.25},
      {"rachid", 11.50, 08.00, 15.13, 14.75},
      {"ali", 09.00, 09.00, 10.00, 11.50},
      {"khalid", 10.00, 10.00, 17.00, 16.00},
      {"attrach", 10.00, 11.00, 17.38, 16.75},
      {"radone", 16.00, 13.00, 18.00, 17.00},
      {"khawla", 12.50, 13.00, 17.88, 16.50},
      {"intissar", 11.50, 09.00, 16.25, 11.57},
      {"monsif", 10.00, 10.00, 10.88, 14.00},
      {"khawla2", 12.00, 11.00, 19.25, 16.50},
      {"mina", 15.00, 08.00, 13.50, 13.00},
      {"hasnae", 11.50, 10.00, 15.38, 17.00},
      {"ayoub", 16.00, 08.00, 12.25, 12.75},
      {"farah", 11.00, 08.00, 18.50, 15.00},
      {"abdmjid", 13.00, 13.00, 16.75, 15.50},
      {"hajar", 10.00, 12.00, 16.75, 12.00},
      {"hannae", 08.50, 08.00, 12.25, 10.00},
      {"fatima", 14.00, 08.00, 12.25, 15.50},
      {"youssef", 14.50, 12.00, 16.88, 14.50},
      {"hind", 14.50, 09.00, 15.00, 15.75},
      {"atman", 10.00, 08.00, 12.38, 12.25},
      {"maysa", 10.00, 13.00, 15.63, 10.00},
      {"zagir", 10.00, 09.00, 17.25, 11.75},
  };
  for (int i = 0; i < MAX; i++) 
    etudiant[i].result = (etudiant[i].ray + etudiant[i].info + etudiant[i].nuc + etudiant[i].elec) / sum;
  
  for (int i = 0; i < MAX - 1; i++) 
    for (int j = i + 1; j < MAX; j++) 
      if (etudiant[i].result < etudiant[j].result) {
        struct etudiant tmp = etudiant[i];
        etudiant[i] = etudiant[j];
        etudiant[j] = tmp;
      }
  
  for (int i = 0; i < MAX; i++)
    printf("%02.02f \t %s\n", etudiant[i].result, etudiant[i].name);

  return 0;
}
