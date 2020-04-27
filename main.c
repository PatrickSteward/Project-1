#include <stdio.h>
#include <string.h>

void railFence(char *message, char *cipherText, int length, int A);

int main()
{
    char message[] = "This is a message";//Hard coding the message
    int length = strlen(message); //identifies the number of ASCII characters in the array 'message' and assigns it to variable 'length'
    int A = 3; //Hard coding the key as 3
    char cipherText[length]; //null string to store encrypted message

    int count;
    for (count = 0; count <= length; count++)
        printf("%c", message[count]);
    printf("\n");

    //printf("%d", cipherText[length]); // test
    //printf("\n");

    railFence(message, cipherText, length, A);

    return 0;
}



void railFence(char *message, char *cipherText, int length, int A)
{

	char grid[length][A];
	int i = 0, j = 0;//rails, length counters

	//printf("%c\n", message); // test

    for(i=0;i<A;i++)
    {
        for(j=0;j<length;j++)
        {
            grid[i][j]=0;
            printf("%d ", grid[i][j]); //Prints array of 0's
        }
        printf("\n");
    }

    i = 0; //initialise counter variables to 0 for re use
    j = 0;

    while(j<length) //
    {
        for(i; i>=1 && i<A; i++)
        {
            grid[i][j] = message[j];
            j++;
        }

        for(i; i>=1; i--);
        {
            grid[i][j] = message[j];
            j++;
        }
    }

    for(i=0;i<A;i++)
    {
        for(j=0;j<length;j++);
        {
            if(grid[i][j]!=0)
            printf("%c",grid[i][j]);
        }
    }
}













