#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
    int i=0;
    FILE* textfile;  //creates a variable to call and manipulate the file
    char character;
    textfile=fopen("read_test.txt", "r");    //opens the file to read
    if (NULL == textfile)
    {
        printf("file can't be opened \n");
    }
    //if statement above checks if the file exists
    do
    {
        character = fgetc(textfile); //gets a single character
        printf("%c", character);
    }
    while (character != EOF);
    //do while statement to read the file while the end of file has not been reached
    fclose(textfile);    //coles the file
    
    textfile=fopen("read_test.txt", "w");    //opens the file to write
    fprintf(textfile, "This is a string which is written to a file\n");  //writes to file
    fclose(textfile);    //closes file
    
    
    if ((strcmp(argv[1],"-E") == 0)) //if the comand promt is not D it will encrypt
    {
        /*encryption function
        if ((argv[2] > 0))
        {
            char* file_name=argv[2];        //PROBLEM PROBLEM PROBLEM
            printf("%c",file_name);         // the fix is to have a third else if statemnt that does the samething as encrypt
        }
        else
        {
            char* file_name=argv[1];
            printf("%c",file_name);
        }
        */
        //char file_name=
        int result = rename(argv[2],"read_text_2.crp");   //this part of the code changes file type to crp
        printf("%s",argv[2]);   //this can print an argument
    }
    else if ((strcmp(argv[1],"-D") == 0))
    {
        //decryption function
        int result = rename("read_text_2.crp","read_text_2.txt");   //this part of the code changes file type to txt
    }
    else
    {
        int result = rename("read_text_2.txt","read_text_2.crp");
    }
    return 0;
}