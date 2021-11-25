#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int powerlevel;

void trainingarc()
{
    printf( "Enter how you plan to train!\n" );
    gets(buffer);
    printf("You train by: " );
    printf( buffer );
}

int main(int argc, char **argv)
{
    char buffer[100];

    powerlevel = 10;


    if( powerlevel > 9000 )
    {
        printf("%d is over 9000!!!!", powerlevel)
    }
    else
    {
        printf( "a power level of %d? hah, puny human!", powerlevel )
    }
	
    trainingarc();
}

