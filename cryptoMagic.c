#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
    if ((strcmp(argv[1],"-E") == 0)) //if the comand promt is not D it will encrypt
    {
        //encryption function
        /*
    FILE* original;
    FILE* encrypt;
    original=fopen("original.txt", "r");
    encrypt=fopen("encrypt.txt", "a");
     int outChar;
     char letter;
    do
    {
        letter = fgetc(original);
        outChar= (int) letter;
        if(outChar==9)
        {
            fprintf(encrypt, "TT");
        }
        else
        {
            outChar = outChar - 16;

            if (outChar<32)
            {
                (outChar-32)+144;
            }
        printf("%x", outChar);
        fprintf(encrypt, "%x",outChar);
        }
    }
    while (letter != EOF);
    fclose(original);
    fclose(encrypt);
    */

        int length1=0;   //initiallizes size of file name before file extension
        char *file_name1=argv[2];    //sets a prointer to where the file name should be
        int size1;   //initiallizes size of the file name and file extension
        for (size1 = 0; file_name1[size1] != '\0'; ++size1);    //counts file name and extension size
        //printf("%d\t",size);    //prints size above
        for (int i = 0; i < size1; i++)  //counts length of file name
        {
            if (file_name1[i]=='.')
            {
                break;
            }
            length1++;
        }
        //printf("%d\n", length);   //prints size above
        char newname1[length1+1]; //creates a new string that will contain the file name only
        for (int i = 0; i < length1; i++)
        {
            newname1[i]=file_name1[i];
        }
        newname1[length1]='\0';   //sets an end to string
        //printf("%s\n",newname);   //prints file name only
        char newnewname1[length1+5];  //creates a new string that will contain the file name and future file extension
        for (int i = 0; i < length1+5; i++)  //initializes name to 0
        {
            newnewname1[i]=0;
        }
        for (int i = 0; i < length1; i++)    //copies over file name
        {
            newnewname1[i]=newname1[i];
        }
        strncat(newnewname1, ".crp",4);  //appended new file extension
        //printf("%s",newnewname);
        int result = rename(argv[2],newnewname1);   //this part of the code changes file type to crp
    }
    else if ((strcmp(argv[1],"-D") == 0))
    {
        //decryption function
        /*
        FILE* Encrypt;
        FILE* decrypt;
        int first, second;
        int letter;
        char character;
        character = 0;
        Encrypt=fopen("Encrypt.txt", "r");
        decrypt=fopen("decrypt.txt", "a");
        do
        {
        first = fgetc(Encrypt);
        if(first >= 65){
        first = first - 86;
        }
        else {
        first = first- 48;
        }
    first = first * 16;
    printf("%d",first);
    second = fgetc(Encrypt);
    if(second>=65){
        second = second - 86;
    }
    else{
   second = second - 48;
   printf("%d",second);
    }
        letter = first + second + 16;
        if(letter > 127){
        (letter-144) + 32;
        }
        printf("%c", letter);
        fprintf(decrypt, "%c",letter);


}
    while ((char) letter != EOF);
fclose(Encrypt);
fclose(decrypt);
        */

        int length2=0;   //initiallizes size of file name before file extension
        char *file_name2=argv[2];    //sets a prointer to where the file name should be
        int size2;   //initiallizes size of the file name and file extension
        for (size2 = 0; file_name2[size2] != '\0'; ++size2);    //counts file name and extension size
        //printf("%d\t",size);    //prints size above
        for (int i = 0; i < size2; i++)  //counts length of file name
        {
            if (file_name2[i]=='.')
            {
                break;
            }
            length2++;
        }
        //printf("%d\n", length);   //prints size above
        char newname2[length2+1]; //creates a new string that will contain the file name only
        for (int i = 0; i < length2; i++)
        {
            newname2[i]=file_name2[i];
        }
        newname2[length2]='\0';   //sets an end to string
        //printf("%s\n",newname);   //prints file name only
        char newnewname2[length2+5];  //creates a new string that will contain the file name and future file extension
        for (int i = 0; i < length2+5; i++)  //initializes name to 0
        {
            newnewname2[i]=0;
        }
        for (int i = 0; i < length2; i++)    //copies over file name
        {
            newnewname2[i]=newname2[i];
        }
        strncat(newnewname2, ".txt",4);  //appended new file extension
        //printf("%s",newnewname);
        int result = rename(argv[2],newnewname2);   //this part of the code changes file type to txt
    }
    else
    {
        //encryption function
        /*
    FILE* original;
    FILE* encrypt;
    original=fopen("original.txt", "r");
    encrypt=fopen("encrypt.txt", "a");
     int outChar;
     char letter;
    do
    {
        letter = fgetc(original);
        outChar= (int) letter;
        if(outChar==9)
        {
            fprintf(encrypt, "TT");
        }
        else
        {
            outChar = outChar - 16;

            if (outChar<32)
            {
                (outChar-32)+144;
            }
        printf("%x", outChar);
        fprintf(encrypt, "%x",outChar);
        }
    }
    while (letter != EOF);
    fclose(original);
    fclose(encrypt);
    */
   
        int length1=0;   //initiallizes size of file name before file extension
        char *file_name1=argv[1];    //sets a prointer to where the file name should be
        int size1;   //initiallizes size of the file name and file extension
        for (size1 = 0; file_name1[size1] != '\0'; ++size1);    //counts file name and extension size
        //printf("%d\t",size);    //prints size above
        for (int i = 0; i < size1; i++)  //counts length of file name
        {
            if (file_name1[i]=='.')
            {
                break;
            }
            length1++;
        }
        //printf("%d\n", length);   //prints size above
        char newname1[length1+1]; //creates a new string that will contain the file name only
        for (int i = 0; i < length1; i++)
        {
            newname1[i]=file_name1[i];
        }
        newname1[length1]='\0';   //sets an end to string
        //printf("%s\n",newname);   //prints file name only
        char newnewname1[length1+5];  //creates a new string that will contain the file name and future file extension
        for (int i = 0; i < length1+5; i++)  //initializes name to 0
        {
            newnewname1[i]=0;
        }
        for (int i = 0; i < length1; i++)    //copies over file name
        {
            newnewname1[i]=newname1[i];
        }
        strncat(newnewname1, ".crp",4);  //appended new file extension
        //printf("%s",newnewname);
        int result = rename(argv[1],newnewname1);   //this part of the code changes file type to crp
    }
    return 0;
}