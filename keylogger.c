//I am not responsible for the use of this algorithm for illegal purposes, as it is intended for education :).
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fPtr;
    fPtr = fopen("file1.txt", "w");
    
    if(fPtr == NULL)
    {
        exit(1);
    }
    
    fopen("keylogger.txt", "w");
    int a = getchar();
    
    for(int i = 1; i > 0; i++)
        fprintf(a, fPtr);
    
    if(i == 0)
    {
        fclose("keylogger.txt");
        exit(1);
    }
    fclose(fPtr);
}
