#include <stdio.h>
#include <stdlib.h>

int main()
{
    int majeur = 1, garcon = 0;
    if(majeur && garcon)
    {
        printf("tu es un gar�on majeur");
    }
    else if(!garcon)
    {
        printf("tu est une fille majeure");
    }
    else
    {
        printf("tu es mineur");
    }
    return 0;
}
