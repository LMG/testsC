#include <stdio.h>
#include <stdlib.h>

#define MAJEUR(age, nom) if (age >= 18) \
                            printf("Vous etes majeur %s\n", nom); \
                        else \
                            printf("Vous etes mineur %s\n", nom);

int main(int argc, char *argv[])
{
    MAJEUR(16, "Maxime")

    return 0;
}
